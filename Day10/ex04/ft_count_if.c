/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:37:05 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/17 10:40:03 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*ft)(char*))
{
	int		i;
	int		compt;

	i = 0;
	compt = 0;
	while (tab[i])
	{
		if ((*ft)(tab[i]) == 1)
			compt++;
		i++;
	}
	return (compt);
}
