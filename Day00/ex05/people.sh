#!/bin/sh

ldapsearch -Q -b "dc=1337,dc=ma" "(uid=z*)" cn | sed '/cn: /!d' | sed 's/cn: //g' | sort -fdr
