/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 19:31:24 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 17:18:34 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	t_list	*l;
	int		i;

	i = 0;
	l = begin_list;
	while (l != NULL)
	{
		l = l->next;
		i++;
	}
	return (i);
}
