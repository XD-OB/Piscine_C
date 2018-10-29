#!/bin/sh

find . -name "*.sh" -not -type d | awk -F/ '{print $NF}' | sed 's/\.sh$//g'
