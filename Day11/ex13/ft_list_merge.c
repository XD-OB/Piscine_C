/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:30:41 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 16:38:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*l;

	if (begin_list == NULL)
		return ;
	if (*begin_list != NULL)
	{
		l = *begin_list;
		while (l->next)
			l = l->next;
		l->next = begin_list2;
	}
	else
		*begin_list = begin_list2;
}
