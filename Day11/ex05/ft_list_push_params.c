/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:14:26 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 18:14:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*b_list;
	int		i;

	if (ac <= 0)
		return (NULL);
	i = 0;
	b_list = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = b_list;
		b_list = list;
		++i;
	}
	return (list);
}
