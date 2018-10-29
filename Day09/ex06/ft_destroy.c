/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:04:40 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/07 09:24:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j] != '\0')
		{
			free(factory[i][j]);
			j++;
		}
		i++;
	}
	free(factory);
}
