#!/bin/bash

gcc "$1".c -o ./ccomp/"$1" && ./ccomp/"$1"
