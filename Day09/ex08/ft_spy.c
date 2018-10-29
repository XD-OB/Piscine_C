/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:18:07 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/07 15:32:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] += 32;
		i++;
	}
	return (str);
}

void	ft_del_ws(char *src, char *dest)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (src[i] != ' ')
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
}

int		main(int argc, char **argv)
{
	int		i;
	char	dest[100];

	i = 1;
	while (i < argc)
	{
		ft_del_ws(argv[i], dest);
		if (ft_strcmp(ft_strlowcase(dest), "president") == 0)
			write(1, "Alert!!!\n", 9);
		if (ft_strcmp(ft_strlowcase(dest), "attack") == 0)
			write(1, "Alert!!!\n", 9);
		if (ft_strcmp(ft_strlowcase(dest), "bauer") == 0)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
