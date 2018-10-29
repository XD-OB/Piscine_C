/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:41:16 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/11 09:14:45 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (*dest != '\0' && size > 0)
	{
		len_dest++;
		dest++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (*src == 0 || size == 1)
		*dest = 0;
	return (len_src + len_dest);
}
