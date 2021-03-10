/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_dev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:24:01 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 17:15:35 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**** This Method Gives Non Perfect Squares as well ****/
/*int		ft_sqrt(int nb)
{
	float x;
	float i;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		x = (float)nb / 2;
		i = 0;
		while (i < 100)
		{
			x = x - (((x * x) - (float)nb) / (2 * x));
			i++;
		}
	}
	return ((int)x);
}*/

int		ft_sqrt(int nb)
{
	unsigned int sqrt;
	unsigned int sqr;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		sqrt = 0;
		while ((sqr = sqrt * sqrt) <= (unsigned)nb)//avoid running function twice
		{
			if (sqr == (unsigned)nb)
				return ((int)sqrt);
			sqrt++;
		}
	}
	return (0);
}

int		main(void)
{
	int nb;

	nb = 2147483647;
//	nb = 117310562;
	printf("Square root of %d is %d", nb, ft_sqrt(nb));
}
