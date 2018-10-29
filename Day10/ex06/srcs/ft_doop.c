/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:33:40 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 06:06:03 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_cmp(char *s1, const char *s2)
{
	int		i;
	int		result;

	result = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break ;
		}
	}
	return (result);
}

int		is_oprt(char *c)
{
	if (!(ft_cmp(c, "+")) || !(ft_cmp(c, "-")))
		return (1);
	if (!(ft_cmp(c, "*")) || !(ft_cmp(c, "/")) || !(ft_cmp(c, "%")))
		return (1);
	return (0);
}

int		f_alpha(char *str)
{
	if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (is_oprt(argv[2]))
	{
		if (!(ft_cmp(argv[2], "/")) || !(ft_cmp(argv[2], "%")))
		{
			if (f_alpha(argv[1]) == 1 || f_alpha(argv[3]) == 1)
			{
				ft_putstr("0\n");
				return (0);
			}
			if (ft_atoi(argv[3]) == 0)
			{
				if (!(ft_cmp(argv[2], "/")))
					ft_putstr("Stop : division by zero\n");
				if (!(ft_cmp(argv[2], "%")))
					ft_putstr("Stop : modulo by zero\n");
				return (0);
			}
		}
		ft_putnbr(ft_calcul(argv[1], argv[2], argv[3]));
		return (0);
	}
	ft_putstr("0\n");
	return (0);
}
