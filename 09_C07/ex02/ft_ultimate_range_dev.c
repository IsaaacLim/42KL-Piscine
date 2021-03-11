/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_dev.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:07:45 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:51:54 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>//remove

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int *)malloc((max - min) * sizeof(int))))
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return ((max - min));
}

int		main(void)
{
	int *range;

	ft_ultimate_range(&range, 2, 5);
//	while (*range)//seg fault if min >= max
//		printf("%d ", *range++);
	for (int i = 0; i < 3; i++)//this too though 
	{
		printf("%d ", range[i]);
	}
	free(range);
//	ft_ultimate_range(&range, 9, 5);
//		printf("%d ", range[0]);
//	free(range);
}
