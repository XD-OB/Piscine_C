/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:08:55 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 17:21:07 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*l_prev;
	t_list	*l;
	t_list	*l_next;

	l_prev = NULL;
	l = *begin_list;
	while (l != NULL)
	{
		l_next = l->next;
		l->next = l_prev;
		l_prev = l;
		l = l_next;
	}
	*begin_list = l_prev;
}
