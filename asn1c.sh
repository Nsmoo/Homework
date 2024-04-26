#!/bin/bash

if [ ! -d "src" ]; then
    mkdir src
fi

asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src rrc.asn1

if [ $? -ne 0 ]; then
    echo "Ошибка при генерации кода из ASN.1"
    exit 1
fi