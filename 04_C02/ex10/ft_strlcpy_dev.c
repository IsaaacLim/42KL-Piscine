/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:51:12 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:24:00 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned count;
	unsigned i;

	count = 0;
	while (src[count] != '\0')
		count++;
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

int				main(void)
{
	char *str1;
	char str2[20];

	str1 = "Hello World!";
	printf("Src: %s\n", str1);
	strlcpy(str2, str1, 14);
	printf("Ori strlcpy: %s\n", str2);
	ft_strlcpy(str2, str1, 14);
	printf("My strlcpy: %s\n", str2);
	strncpy(str2, str1, 14);
	printf("Ori strncpy: %s\n", str2);
	//strlcpy stops at size-1, strncpy stops at size,
	//but at the end both still replaces the last char with '\0'
}
