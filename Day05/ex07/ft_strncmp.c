/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 19:17:54 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/05 11:58:20 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	result = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (result);
}
