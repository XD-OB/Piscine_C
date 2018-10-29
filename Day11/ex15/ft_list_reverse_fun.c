/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:33:37 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 15:31:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		len;
	int		i;
	int		j;
	void	*pt_tmp;
	t_list	*l;

	len = 0;
	i = 0;
	l = begin_list;
	while (++len && l != NULL)
		l = l->next;
	while (i < len - 2)
	{
		j = i;
		l = begin_list;
		while (l != NULL && l->next != NULL && j < len - 2)
		{
			pt_tmp = l->data;
			l->data = l->next->data;
			l->next->data = pt_tmp;
			l = l->next;
			j++;
		}
		i++;
	}
}
