/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:41:11 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 15:58:03 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char letter;
	bool last;

	last = false;
	while (!last)
	{
		letter = *str;
		if (letter == '\0')
		{
			last = true;
			break ;
		}
		ft_putchar(letter);
		str++;
	}
}
