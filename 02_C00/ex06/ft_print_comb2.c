/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:25:44 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/19 15:25:48 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_string_comb(int x)
{
	if (x < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + x);
	}
	else
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_string_comb(i);
			ft_putchar(' ');
			ft_string_comb(j);
			if (i + j != 197)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
