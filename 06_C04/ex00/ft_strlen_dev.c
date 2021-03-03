/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:23:38 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/03 10:04:58 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int		main(void)
{
	char *str;
	str = "abcd\tefghijklmnop";

	printf("Ori: %lu\n", strlen(str));
	printf("My: %d\n", ft_strlen(str));
}
