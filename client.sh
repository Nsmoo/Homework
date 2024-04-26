#!/bin/bash

gcc -o build/client src/*.c client.c -I src -w

./build/client