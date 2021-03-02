/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:57:50 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 09:21:51 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (*(unsigned char*)&s1[i] - *(unsigned char*)&s2[i]);

	//Another syntax
/*	while (*s1 != '\0' &&  *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
*/
}

int		main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "Hello";
	str2 = "Helloo";
	str3 = "hello";
	str4 = "He1lo";
	printf("ft, s1-s2: %d\n", ft_strcmp(str1, str4));
	printf("ori, s1-s2: %d\n", strcmp(str1, str4)); //ori function
}
