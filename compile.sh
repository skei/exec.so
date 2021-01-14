#!/bin/bash

gcc main.c -Wall -Wextra -fPIC -shared -o main.so -DINTERPRETER=\"/lib64/ld-linux-x86-64.so.2\" -Wl,-e,entry_point

