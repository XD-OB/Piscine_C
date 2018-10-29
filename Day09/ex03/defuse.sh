#!/bin/sh

echo $(stat -f %a bomb.txt) - 1 | bc
