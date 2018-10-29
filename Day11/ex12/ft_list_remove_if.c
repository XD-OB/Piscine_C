/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:30:12 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 14:34:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*l_delt;
	t_list	*l;

	if (begin_list == NULL)
		return ;
	l = *begin_list;
	while ((l != NULL) && (l->next != NULL))
	{
		if ((*cmp)(l->next->data, data_ref) == 0)
		{
			l_delt = l->next;
			free(l_delt);
			l->next = l->next->next;
		}
		l = l->next;
	}
	l = *begin_list;
	if ((l != NULL) && (*cmp)(l->data, data_ref) == 0)
	{
		*begin_list = l->next;
		free(l);
	}
}
