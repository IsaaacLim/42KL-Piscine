/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_dev.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:58:00 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 11:15:20 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb * power);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int		main(void)
{
	int nb;
	int pow;

	nb = 0;
	pow = 0;
	printf("%d to the power of %d is: %d", nb, pow, ft_recursive_power(nb, pow));
}
