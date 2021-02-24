/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_dev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:37:39 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 11:27:30 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int		main(void)
{
	int i0;
	int *i1;
	int **i2;
	int ***i3;
	int ****i4;
	int *****i5;
	int ******i6;
	int *******i7;
	int ********i8;
	int *********i9;

	i0 = 0;
	i1 = &i0;
	i2 = &i1;
	i3 = &i2;
	i4 = &i3;
	i5 = &i4;
	i6 = &i5;
	i7 = &i6;
	i8 = &i7;
	i9 = &i8;
	printf("Before: %d\n", i0);
	ft_ultimate_ft(i9);
	printf("After: %d\n", i0);
}
