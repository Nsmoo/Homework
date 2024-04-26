#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>
#include <RRCConnectionSetupComplete.h>
#include <per_encoder.h>
#include <per_decoder.h>

#define SERVER_IP "127.0.0.1"
#define PORT 8080

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024];

    printf("Creating socket...\n");
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Failed to create socket");
        return -1;
    }

    printf("Setting up server address...\n");
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, SERVER_IP, &serv_addr.sin_addr) <= 0) {
        perror("Invalid address or address not supported");
        return -1;
    }

    printf("Connecting to server...\n");
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        return -1;
    }

    printf("Initializing RRCConnectionRequest...\n");
    RRCConnectionRequest_t req;
    memset(&req, 0, sizeof(RRCConnectionRequest_t));
    req.criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;

    printf("Filling in s-TMSI values...\n");
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_s_TMSI;

    uint8_t mmec_value[] = {1};
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.mmec.buf = mmec_value;
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.mmec.size = sizeof(mmec_value);

    uint8_t m_tmsi_value[] = {0, 0, 48, 57};
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.m_TMSI.buf = m_tmsi_value;
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.m_TMSI.size = sizeof(m_tmsi_value);

    printf("Encoding and sending RRCConnectionRequest...\n");
    asn_enc_rval_t enc_ret = uper_encode_to_buffer(&asn_DEF_RRCConnectionRequest, NULL, &req, buffer, sizeof(buffer));
    if (enc_ret.encoded == -1) {
        fprintf(stderr, "Error encoding RRCConnectionRequest\n");
        return -1;
    }

    if (send(sock, buffer, enc_ret.encoded, 0) == -1) {
        perror("Error sending RRCConnectionRequest");
        return -1;
    }

    printf("Receiving RRCConnectionSetup...\n");
    ssize_t len = recv(sock, buffer, sizeof(buffer), 0);
    if (len <= 0) {
        perror("Error receiving RRCConnectionSetup");
        return -1;
    }

    RRCConnectionSetup_t *setup = NULL;
    asn_dec_rval_t dec_ret = uper_decode(NULL, &asn_DEF_RRCConnectionSetup, (void **)&setup, buffer, len, 0, 0);

    if (dec_ret.code != RC_OK) {
        fprintf(stderr, "Error decoding RRCConnectionSetup\n");
        return -1;
    }

    printf("Received RRCConnectionSetup with transaction identifier: %ld\n", setup->rrc_TransactionIdentifier);

    printf("Initializing RRCConnectionSetupComplete...\n");
    RRCConnectionSetupComplete_t setup_complete;
    memset(&setup_complete, 0, sizeof(RRCConnectionSetupComplete_t));
    setup_complete.rrc_TransactionIdentifier = setup->rrc_TransactionIdentifier;

    setup_complete.criticalExtensions.present = RRCConnectionSetupComplete__criticalExtensions_PR_c1;
    setup_complete.criticalExtensions.choice.c1.present = RRCConnectionSetupComplete__criticalExtensions__c1_PR_rrcConnectionSetupComplete_r8;

    setup_complete.criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.selectedPLMN_Identity = 1;

    uint8_t nas_info[] = {0x01, 0x02, 0x03};
    setup_complete.criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.dedicatedInfoNAS.buf = nas_info;
    setup_complete.criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.dedicatedInfoNAS.size = sizeof(nas_info);


    printf("Encoding and sending RRCConnectionSetupComplete...\n");
    enc_ret = uper_encode_to_buffer(&asn_DEF_RRCConnectionSetupComplete, NULL, &setup_complete, buffer, sizeof(buffer));
    if (enc_ret.encoded == -1) {
        fprintf(stderr, "Error encoding RRCConnectionSetupComplete\n");
        return -1;
    }

    if (send(sock, buffer, enc_ret.encoded, 0) == -1) {
        perror("Error sending RRCConnectionSetupComplete");
        return -1;
    }

    printf("Successfully sent RRCConnectionSetupComplete.\n");

    close(sock);

    return 0;
}