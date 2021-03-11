/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:07:45 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:51:44 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
