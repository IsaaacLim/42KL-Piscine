/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:17:06 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 14:52:00 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHOW_TAB_C
# define FT_SHOW_TAB_C

# include "ft_stock_str.h"

#endif

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int					main(int argc, char **argv)
{
	/*** something funky here but it works ***/
	int i;
//	struct s_stock_str	*arr; //passing this struct type to func
	t_stock_str *arr;
	arr = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		ft_show_tab(&arr[i]);
		i++;
	}
//	ft_show_tab(ft_strs_to_tab(argc, argv)); //better way
}
