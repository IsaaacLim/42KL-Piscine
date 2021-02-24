/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:10:48 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 22:18:34 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

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
