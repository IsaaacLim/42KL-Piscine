/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_dev.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:32:36 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/06 14:55:41 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	unsigned int factorial;
	unsigned int i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		factorial = 1;
		i = nb;
		while ((unsigned int)nb / i != (unsigned int)nb) //while (i >= 1)
		{
			factorial = factorial * i;
			i--;
		}
	}
	return (factorial);
}

int		main(void)
{
	int num;

	num = 5;
	printf("Factorial of %d is %d", num, ft_iterative_factorial(num));
}
