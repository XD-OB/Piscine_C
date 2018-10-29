/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:31:52 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 16:40:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*list2;
	t_list	*next;

	list = *begin_list;
	while (list != NULL)
	{
		list2 = *begin_list;
		while (list2->next)
		{
			if ((*cmp)(list2->data, list2->next->data) > 0)
			{
				next = list2->data;
				list2->data = list2->next->data;
				list2->next->data = next;
			}
			list2 = list2->next;
		}
		list = list->next;
	}
}
