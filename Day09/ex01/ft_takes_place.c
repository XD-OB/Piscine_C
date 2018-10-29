/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:40:45 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/06 18:24:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*conv(int h)
{
	char	*conv;

	if ((h >= 0 && h < 12) || h == 24)
		conv = "A.M.";
	if (h >= 12 && h < 24)
		conv = "P.M.";
	return (conv);
}

int		hour_format(int h)
{
	if (h > 12 && h < 24)
		return (h % 12);
	if (h > 0 && h < 13)
		return (h);
	if (h == 0 || h == 24)
		return (12);
	return (hour_format(h % 24));
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND ", hour_format(hour), conv(hour));
	printf("%d.00 ", hour_format((hour + 1) % 24));
	printf("%s\n", conv((hour + 1) % 24));
}
