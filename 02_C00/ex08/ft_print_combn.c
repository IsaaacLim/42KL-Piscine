/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:37:52 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/01 11:42:07 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar()
{
	write(1, &c, 1);
}

void	ft_recursion(int n, int tab[], int max_number, int numbers)
{
	int j;
	int i;

	j = 0;
	while (numbers < n)
	{
		i++;
		while (tab[numbers] <= max_number)
		{
			ft_recursion(n, tab, max_number, numbers + 1);
			i++;

		}
	}
}


void	ft_max_numbers(int n, int tab[10]);
{
	int position;

	position = 0;
	while (position < n)
	{
		tab[position] = 10 - n + position;
		position++;
	}
}

void	ft_print_combn(int n)
{
	int tab[10];

	ft_max_numbers(n, tab);
	ft_recursion(n, tab, 9, 0);
}
