/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 02:15:27 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/13 22:45:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_not_wspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (0);
	return (1);
}

int		ft_count_w(char *str)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (ft_not_wspace(str[i]) == 0)
		{
			if (j == 1)
				j = 0;
		}
		if (ft_not_wspace(str[i]) == 1)
			if (j == 0)
			{
				n++;
				j = 1;
			}
		i++;
	}
	return (n);
}

int		ft_size_w(char *str, int ind)
{
	int		i;

	i = ind;
	while (ft_not_wspace(str[i]) == 1 && str[i])
		i++;
	return (i - ind);
}

int		ft_position(char *str, int *pt)
{
	while (str[*pt])
	{
		if (ft_not_wspace(str[*pt]) == 1)
			break ;
		(*pt)++;
	}
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		len;
	int		pt[1];
	char	**table;

	i = 0;
	*pt = 0;
	table = (char**)malloc((ft_count_w(str) + 1) * sizeof(char*));
	if (table)
	{
		while (i < ft_count_w(str))
		{
			j = 0;
			ft_position(str, pt);
			len = ft_size_w(str, *pt);
			table[i] = (char*)malloc((len + 1) * sizeof(char));
			while (j < len)
				table[i][j++] = str[(*pt)++];
			table[i][j] = '\0';
			i++;
		}
		table[i] = 0;
	}
	return (table);
}
