/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 23:07:00 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/12 02:34:31 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_indest(char *dest, int argc, char **argv)
{
	int		j;
	int		i;
	int		len;

	len = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			dest[len] = argv[i][j];
			j++;
			len++;
		}
		if (i != argc - 1)
		{
			dest[len] = '\n';
			len++;
		}
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++] != '\0')
			len++;
		i++;
	}
	dest = (char*)malloc(len * sizeof(char));
	if (dest)
	{
		dest = ft_indest(dest, argc, argv);
		return (dest);
	}
	return (0);
}
