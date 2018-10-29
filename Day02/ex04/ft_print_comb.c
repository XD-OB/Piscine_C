/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 05:45:46 by obelouch          #+#    #+#             */
/*   Updated: 2018/08/30 23:23:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char	c);

void	ft_print_comb(void)
{
	char	nbr[3];

	nbr[0] = 48;
	while (nbr[0] < 56)
	{
		nbr[1] = nbr[0] + 1;
		while (nbr[1] < 57)
		{
			nbr[2] = nbr[1] + 1;
			while (nbr[2] < 58)
			{
				ft_putchar(nbr[0]);
				ft_putchar(nbr[1]);
				ft_putchar(nbr[2]);
				if (nbr[0] != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nbr[2]++;
			}
			nbr[1]++;
		}
		nbr[0]++;
	}
}
