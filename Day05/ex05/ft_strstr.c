/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:00:02 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/08 11:32:16 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		ind;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		ind = i;
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0')
			{
				if (str[ind + j] != to_find[j])
					ind = 0;
				if (ind == 0)
					break ;
				j++;
			}
			if (ind != 0)
				return (&str[ind]);
		}
		i++;
	}
	return (0);
}
