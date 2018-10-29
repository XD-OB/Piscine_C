/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:10:10 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/05 15:41:34 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_r(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		result;

	result = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break ;
		}
	}
	return (result);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*pt_tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				pt_tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = pt_tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr_r(argv[i]);
}
