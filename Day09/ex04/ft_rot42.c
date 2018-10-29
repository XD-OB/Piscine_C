/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 23:35:34 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/07 00:38:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_swap_maj(char str)
{
	int j;

	j = 1;
	while (j <= 42)
	{
		if (str == 90)
			str = 64;
		str++;
		j++;
	}
	return (str);
}

int		ft_swap_min(char str)
{
	int j;

	j = 1;
	while (j <= 42)
	{
		if (str == 122)
			str = 96;
		str++;
		j++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = ft_swap_maj(str[i]);
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = ft_swap_min(str[i]);
		i++;
	}
	return (str);
}
