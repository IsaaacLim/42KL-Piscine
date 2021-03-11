/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_dev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:59:10 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:49:54 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //remove

int		*ft_range(int min, int max)
{
	int i;
	int	*num_arr;

	if (min >= max)
		return (0);
	if (!(num_arr = (int *)malloc((max - min) * sizeof(int))))
		return (0);
	i = 0;
	while (i < (max - min))
	{
		num_arr[i] = min + i;
		i++;
	}
	return (num_arr);
}

int		main(void)
{
	int *num_arr;

	if (!(num_arr = ft_range(2, 5)))
		printf("error");
//	while (*num_arr)
//		printf("%d ", *num_arr++); // Will have seg fault 
	for (int i = 0; i < 3; i++)
		printf("%d ", num_arr[i]);
	printf("\n");
	free(num_arr);
	if (!(num_arr = ft_range(7, 5)))
		printf("error:");
	printf("%x ", (unsigned int)num_arr);
	free(num_arr);
}
