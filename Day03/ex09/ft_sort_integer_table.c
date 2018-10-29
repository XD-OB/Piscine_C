/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 12:45:56 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/01 15:53:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		id_min;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		id_min = j;
		while (j < size)
		{
			if (tab[id_min] > tab[j + 1])
				id_min = j + 1;
			j++;
		}
		tmp = tab[i];
		tab[i] = tab[id_min];
		tab[id_min] = tmp;
		i++;
	}
}
