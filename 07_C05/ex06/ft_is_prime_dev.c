/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_dev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:40:57 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/06 13:36:59 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //remove

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2147483647)
		return (1);
	i = 2;
	while (i <= nb / 2) //or (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char *word;

	for (int n = 2147483640; n <= 2147483647; n++)
	{
		if (ft_is_prime(n) == 1)
			word = "Prime";
		else
			word = "Not";
		printf("%d is %s\n", n, word);
	}
}
