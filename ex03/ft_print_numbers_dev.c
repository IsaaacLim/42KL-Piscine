/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_dev.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:24:21 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/19 11:06:57 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_number();
}
