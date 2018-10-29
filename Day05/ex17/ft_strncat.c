/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 17:42:08 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/03 18:22:56 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		size_str;
	int		i;

	size_str = 0;
	while (dest[size_str] != '\0')
		size_str++;
	i = 0;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[size_str + i] = src[i];
		i++;
	}
	dest[size_str + i] = '\0';
	return (dest);
}
