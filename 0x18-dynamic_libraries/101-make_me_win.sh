#!/bin/bash
wget https://github.com/vagava/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so