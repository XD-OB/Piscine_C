/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:38:24 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 16:37:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	n;

	n = nbr;
	if (begin_list == NULL)
		return (NULL);
	while (n && (begin_list != NULL))
	{
		begin_list = begin_list->next;
		n--;
	}
	if (n >= 0)
		return (begin_list);
	return (NULL);
}
