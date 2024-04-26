#!/bin/bash

rm -rf build
mkdir build

rm -rf src
mkdir src

asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src rrc.asn1

gcc -o build/server src/*.c server.c -Isrc -w -DPDU="RRCConnectionSetup"

./build/server
