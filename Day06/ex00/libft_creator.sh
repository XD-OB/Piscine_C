#!/bin/sh

gcc -c ft_*.c
ar rc libft.a ft_*.o
rm *.o
