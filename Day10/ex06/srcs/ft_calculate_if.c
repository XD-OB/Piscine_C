/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:49:42 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 05:54:24 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_calcul(char *str1, char *c, char *str2)
{
	if (*c == '+')
		return (ft_atoi(str1) + ft_atoi(str2));
	if (*c == '-')
		return (ft_atoi(str1) - ft_atoi(str2));
	if (*c == '*')
		return (ft_atoi(str1) * ft_atoi(str2));
	if (*c == '/')
		return (ft_atoi(str1) / ft_atoi(str2));
	if (*c == '%')
		return (ft_atoi(str1) % ft_atoi(str2));
	return (0);
}
