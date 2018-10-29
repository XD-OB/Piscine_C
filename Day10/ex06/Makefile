# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 15:23:12 by obelouch          #+#    #+#              #
#    Updated: 2018/09/19 23:32:38 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = do-op

SRCS = srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/ft_calculate_if.c srcs/ft_doop.c

OUTO = ft_atoi.o ft_putchar.o ft_putstr.o ft_putnbr.o ft_calculate_if.o ft_doop.o

HEAD = includes/ft.h

OPT = -Wall -Wextra -Werror

all: $(HEAD)
	gcc -c $(SRCS) $(OPT)
	gcc -o $(EXEC) $(OUTO) $(OPT)

clean:
	/bin/rm -f $(OUTO)

fclean: clean
	/bin/rm -f $(EXEC)

re: fclean all
