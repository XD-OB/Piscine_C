/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:37:05 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/14 01:22:11 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str)
{
	int		i;
	int		a;
	int		sign;

	i = 0;
	a = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			a = (a * 10) + (str[i] - 48);
		else
			break ;
		i++;
	}
	return (sign * a);
}

int		to_dec(char *base_from, char *nbr, int len)
{
	int		i;
	int		len_from;
	int		n;

	while (*(base_from + len_from))
		len_from++;
	i = 0;
	while (nbr[i] != '\0')
	{
		j = 0;
		while (base_from[j] != '\0')
		{
			if (nbr[i] == base_from[j])
				nbr[i] = j + 48;
			j++;
		}
		i++;
	}
	n = ft_atoi(nbr);
	
}

int		dec_to_base(char *base_to, int dec)
{
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len;
	int		len_from;
	int		len_to;
	int		dec;

	len = 0;
	len_from = 0;
	while (*(nbr + len))
		len++;
	while (*(base_to + len_to))
		len_to++;
	dec = to_dec(base_from, len);
	return (0);
}
