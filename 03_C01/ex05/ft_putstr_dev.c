/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_dev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:41:11 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 16:27:29 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

int		main(void)
{
	char word[12] = "Hello World!";
	char *word_pointer;
	
	word_pointer = word; //an array name is the pointer to itself (same with &word[0])
	printf("Word typed: %s\n", word);
	ft_putstr(word_pointer);
}
