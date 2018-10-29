/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:48:23 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/04 05:00:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_n(int tab[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

void	full_tabn(int tab[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
}

void	modif(int tab[], int i, int n)
{
	int		z;

	z = i;
	while (z != n)
	{
		tab[z] = tab[z - 1] + 1;
		z++;
	}
}

void	ft_print_combn(int n)
{
	int		tab[n];
	int		i;
	int		j;

	full_tabn(tab, n);
	while (tab[0] != (10 - n))
	{
		print_n(tab, n);
		ft_putchar(',');
		ft_putchar(' ');
		tab[n - 1]++;
		i = n - 1;
		j = 10;
		while (tab[i] == j)
		{
			tab[i - 1]++;
			modif(tab, i, n);
			i--;
			j--;
		}
	}
	print_n(tab, n);
}
