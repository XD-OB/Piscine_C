/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:24:27 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/13 10:52:11 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char	c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	if (tab)
	{
		i = 0;
		while (tab[i])
		{
			j = 0;
			while (tab[i][j])
			{
				ft_putchar(tab[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
