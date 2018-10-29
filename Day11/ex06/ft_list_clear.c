/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:05:35 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 10:17:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list		*l;

	if (*begin_list == NULL)
		return ;
	while (*begin_list != NULL)
	{
		l = *begin_list;
		free(l);
		*begin_list = (*begin_list)->next;
	}
	*begin_list = NULL;
}
