/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:57:22 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/10 13:57:32 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		tmp_n;
	int		compt;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(50);
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	compt = 1;
	tmp_n = nb;
	while ((tmp_n /= 10) >= 1)
		compt *= 10;
	while (compt >= 1)
	{
		ft_putchar((nb / compt) + 48);
		nb %= compt;
		compt /= 10;
	}
}
