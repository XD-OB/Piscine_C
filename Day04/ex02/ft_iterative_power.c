/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 05:16:33 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/04 14:58:13 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;

	if (power < 0)
		return (0);
	i = 1;
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
