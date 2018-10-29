/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:25:53 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/17 14:57:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	if (dest)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	struct s_stock_par	*str;

	str = (struct s_stock_par*)malloc(sizeof(*str) * (ac + 1));
	if (str)
	{
		i = 0;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				j++;
			str[i].size_param = j;
			str[i].str = av[i];
			str[i].copy = ft_strdup(av[i]);
			str[i].tab = ft_split_whitespaces(av[i]);
			i++;
		}
		str[i].str = 0;
	}
	return (str);
}
