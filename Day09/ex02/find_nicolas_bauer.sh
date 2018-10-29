#!/bin/sh

cat $1 | grep -i "nicolas\tbauer" | rev | cut -f 2 | rev | sed -e '/[0-9]\{4\}$/!d'
