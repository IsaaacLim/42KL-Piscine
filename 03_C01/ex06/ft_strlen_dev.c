/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:10:48 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 22:17:13 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		count;
	char	word;

	count = 0;
	while (true)
	{
		word = *str;
		if (word == '\0')
		{
			false;
			break ;
		}
		count++;
		str++;
	}
	return (count);
}

int		main(void)
{
	char word[] = "Hello World! 23456789";
	char *word_pointer;

	word_pointer = word;
	printf("%d", ft_strlen(word_pointer));
}
