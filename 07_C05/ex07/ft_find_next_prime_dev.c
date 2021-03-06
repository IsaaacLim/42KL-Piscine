/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_dev.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:21:34 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/06 14:23:57 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/****** Tried to Incorporate Sqrt to Limit Search Range ******/
/*int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	while (sqrt <= nb / 2)
	{
		if (sqrt * sqrt == nb)
			return (0); //no prime
		sqrt++;
	}
	return (nb); //possible
}*/

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (i <= 6700417)
	{
		while (ft_is_prime(i) != 1)
		{
			i++;
		}
		return (i);
	}
	else
		return (2147483647);
}

int		main(void)
{
	int nb;

	nb = -3;
	while (nb < 20)
	{
		printf("%d next prime is %d\n", nb, ft_find_next_prime(nb));
		nb++;
	}
}
