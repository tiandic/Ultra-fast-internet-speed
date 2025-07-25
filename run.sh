#!/bin/bash
###
 # @encode: utf-8
 # @Date: 2025-07-25 18:36:28
 # @LastEditTime: 2025-07-25 18:37:32
 # @FilePath: /Ultra-fast internet speed/run.sh
### 
gcc client.c -o client 
gcc server.c -o server
./server &
./client