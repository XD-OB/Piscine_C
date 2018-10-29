/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 22:33:08 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/09 23:52:18 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (i == 0)
			{
				str[i] -= 32;
				i++;
			}
			if (str[i - 1] < 48 || str[i - 1] > 123)
				str[i] -= 32;
			if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] -= 32;
			if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
