#!/bin/sh

if [ $(ifconfig | grep -w "inet" | cut -d ' ' -f 2 | grep -v "127.0.0.1" | wc -l) -ne 0 ]
then
	ifconfig | grep -w "inet" | cut -d ' ' -f 2 | grep -v "127.0.0.1"
else
	echo "I am lost!"
fi
