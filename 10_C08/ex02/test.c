/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:14:29 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 16:36:35 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_C
# define TEST_C

# include <stdio.h>
# include "ft_abs.h"

#endif

int		main(void)
{
	long	l_num;
	int		num;

	l_num = -2147483648;
	while (l_num <= -2147483644)
	{
		printf("Macros abs(%ld) = %ld\n", l_num, ABS(l_num));
		l_num++;
	}
	printf("\n");
	num = -2147483648;
	while (num <= -2147483644)
	{
		printf("Macros abs(%d) = %d\n", num, ABS(num));
		num++;
	}
}
