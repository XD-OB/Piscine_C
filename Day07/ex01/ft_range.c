/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:54:02 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/11 17:29:55 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (0);
	tab = (int*)malloc((max - min) * sizeof(*tab));
	if (tab == 0)
		return (0);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}
