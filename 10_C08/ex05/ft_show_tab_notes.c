/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab_notes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:17:06 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 11:46:12 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHOW_TAB_C
# define FT_SHOW_TAB_C

# include "ft_stock_str.h"
# include <unistd.h>

#endif

//struct s_stock_str	*ft_strs_to_tab(int ac, char **av);//don't include this

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void				ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void				ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0) //not to be used as par->str
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
