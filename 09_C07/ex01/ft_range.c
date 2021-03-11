/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:59:10 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:49:47 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
