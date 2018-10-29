/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:12:40 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/11 23:20:45 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == 0)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = tab;
	return (max - min);
}
