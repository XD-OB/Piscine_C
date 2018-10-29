/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:10:32 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/07 12:25:51 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		at;
	int		bt;
	int		ct;
	int		dt;

	ct = ***a;
	dt = *******c;
	bt = ****d;
	at = *b;
	***a = at;
	*b = bt;
	*******c = ct;
	****d = dt;
}
