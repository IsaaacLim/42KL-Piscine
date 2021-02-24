/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_dev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:32:42 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 11:45:44 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int i;
	int j;

	i = 12;
	j = 42;
	printf("Before, i: %d, j: %d\n", i, j);
	ft_swap(&i, &j);
	printf("After, i: %d, j: %d\n", i, j);
}
