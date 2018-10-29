/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:00:29 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/13 22:46:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_not_charset(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_count_w(char *str, char *charset)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (ft_not_charset(str[i], charset) == 0)
		{
			if (j == 1)
				j = 0;
		}
		if (ft_not_charset(str[i], charset) == 1)
			if (j == 0)
			{
				n++;
				j = 1;
			}
		i++;
	}
	return (n);
}

int		ft_size_w(char *str, int ind, char *charset)
{
	int		i;

	i = ind;
	while (ft_not_charset(str[i], charset) == 1 && str[i])
		i++;
	return (i - ind);
}

int		ft_position(char *str, int *pt, char *charset)
{
	while (str[*pt])
	{
		if (ft_not_charset(str[*pt], charset) == 1)
			break ;
		(*pt)++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	int		pt[1];
	char	**table;

	i = 0;
	*pt = 0;
	table = (char**)malloc((ft_count_w(str, charset) + 1) * sizeof(char*));
	if (table)
	{
		while (i < ft_count_w(str, charset))
		{
			j = 0;
			ft_position(str, pt, charset);
			len = ft_size_w(str, *pt, charset);
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
