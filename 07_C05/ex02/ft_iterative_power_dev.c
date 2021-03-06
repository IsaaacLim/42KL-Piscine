/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_dev.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:21:14 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 23:47:04 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int total;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	total = 1;
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}

int		main(void)
{
	int nb;
	int power;

	nb = 0;
	power = 0;
	printf("%d to the power of %d is: %d", nb, power, ft_iterative_power(nb, power));
}
