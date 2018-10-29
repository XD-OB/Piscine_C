/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adv_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 03:36:17 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 05:22:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_adv_opp.h"
#include "../includes/ft_opp.h"

void	ft_usage(char *s1, char *s2)
{
	if (ft_atoi(s1) == ft_atoi(s2) || ft_atoi(s1) != ft_atoi(s2))
		ft_putstr("error : only [ + - * / % ] are accepted.\n");
}

int		main(int argc, char **argv)
{
	int		i;
	void	(*fct)(char*, char*);

	i = 0;
	if (argc == 4)
	{
		while (i < 5)
		{
			if (ft_strcmp(argv[2], g_opptab[i].str) == 0)
			{
				fct = g_opptab[i].f;
				(*fct)(argv[1], argv[3]);
				ft_putchar('\n');
				return (0);
			}
			i++;
		}
		fct = g_opptab[i].f;
		(*fct)("oussama", "ousasma");
	}
	return (0);
}
