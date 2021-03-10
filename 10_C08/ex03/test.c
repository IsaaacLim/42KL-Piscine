/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:01:22 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 16:38:24 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_C
# define TEST_C

# include "ft_point.h"
# include <stdio.h>

#endif

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point	point;

	set_point(&point);
	printf("point.x: %d\n", point.x);
	printf("point.y: %d\n", point.y);
	return (0);
}
