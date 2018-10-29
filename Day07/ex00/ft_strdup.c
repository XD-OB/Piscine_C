/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:42:06 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/11 12:21:07 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len_src;

	i = 0;
	len_src = 0;
	dup = (char*)malloc(sizeof(*src) * (len_src + 1));
	if (dup == 0)
		return (0);
	while (src[len_src] != '\0')
		len_src++;
	while (i < len_src)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
