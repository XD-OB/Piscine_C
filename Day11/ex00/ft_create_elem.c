/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:11:59 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 18:12:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	if ((elem = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
