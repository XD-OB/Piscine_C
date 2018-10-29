/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:26:51 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/05 22:18:08 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (i < (nb / 2) + 1)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		find;

	if (nb < 2)
		return (2);
	find = 0;
	while (find == 0)
	{
		if (ft_is_prime(nb))
			find = nb;
		nb++;
	}
	return (find);
}
