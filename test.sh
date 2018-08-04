#!/bin/bash

gcc fizzbuzz.c -o fizzbuzz

./fizzbuzz | diff - expected-output.txt
