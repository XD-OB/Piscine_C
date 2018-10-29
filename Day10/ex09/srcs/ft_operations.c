/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 02:19:04 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 06:20:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_adv_opp.h"

void	ft_add(char *s1, char *s2)
{
	ft_putnbr(ft_atoi(s1) + ft_atoi(s2));
}

void	ft_sub(char *s1, char *s2)
{
	ft_putnbr(ft_atoi(s1) - ft_atoi(s2));
}

void	ft_mul(char *s1, char *s2)
{
	ft_putnbr(ft_atoi(s1) * ft_atoi(s2));
}

void	ft_div(char *s1, char *s2)
{
	if (ft_atoi(s2) == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(ft_atoi(s1) / ft_atoi(s2));
}

void	ft_mod(char *s1, char *s2)
{
	if (ft_atoi(s2) == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(ft_atoi(s1) % ft_atoi(s2));
}
