# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 15:23:12 by obelouch          #+#    #+#              #
#    Updated: 2018/09/20 04:33:12 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = ft_advanced_do-op

SRCS = srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_operations.c srcs/ft_adv_op.c

OUTO = *.o

HEAD = includes/ft_adv_opp.h includes/ft_opp.h

OPT = -Wall -Wextra -Werror

all: $(EXEC)

$(EXEC): $(HEAD)
	gcc -c $(SRCS) $(OPT)
	gcc -o $(EXEC) $(OUTO)

clean:
	/bin/rm -f $(OUTO)

fclean: clean
	/bin/rm -f $(EXEC)

re: fclean all
