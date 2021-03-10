/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:30:40 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 17:31:17 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_C
# define TEST_C

# include "ft_stock_str.h"
# include <stdio.h>
# include <stdlib.h>

#endif

int		main(int argc, char **argv)
{
	int					i;
	t_stock_str			*arr;
//	struct s_stock_str	*arr;

	arr = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("original: %s, %p\n", arr[i].str, arr[i].str);
		printf("copy: %s, %p\n", arr[i].copy, arr[i].copy);
		printf("size: %d\n", arr[i].size);
		i++;
	}
	free(arr);
}
