/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adv_opp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 03:20:41 by obelouch          #+#    #+#             */
/*   Updated: 2018/09/20 05:16:26 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ADV_OPP_H
# define FT_ADV_OPP_H

typedef struct		s_opp
{
	char			*str;
	void			(*f)(char*, char*);
}					t_opp;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);
int					ft_atoi(char *s);
int					ft_strcmp(char *s1, char *s2);
void				ft_add(char *s1, char *s2);
void				ft_sub(char *s1, char *s2);
void				ft_mul(char *s1, char *s2);
void				ft_div(char *s1, char *s2);
void				ft_mod(char *s1, char *s2);
void				ft_usage(char *s1, char *s2);

#endif
