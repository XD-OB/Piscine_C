#!/bin/sh

cat /etc/passwd | grep -v "^#" | sed -n 'n;p;d' | cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p | awk '{print$0", "}' | tr -d '\n' | sed 's/, $/./' | tr -d '\n'  
