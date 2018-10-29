/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 01:24:04 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/17 02:19:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*result;

	i = 0;
	result = (int*)malloc(sizeof(*result) * length);
	while (i < length)
	{
		*(result + i) = (*f)(tab[i]);
		i++;
	}
	return (result);
}
