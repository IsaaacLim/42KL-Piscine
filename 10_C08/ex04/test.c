/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:30:40 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 16:46:44 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_C
# define TEST_C

# include "ft_stock_str.h"
# include <stdio.h>

#endif

int		main(int argc, char **argv)
{
	int					i;
	t_stock_str			*structs;
//	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("\t|original : $%s$ @ %p\n", structs[i].str, structs[i].str);
		printf("\t|  copied : $%s$ @ %p\n", structs[i].copy, structs[i].copy);
		printf("\t|	   size : %d\n", structs[i].size);
		i++;
	}
}
