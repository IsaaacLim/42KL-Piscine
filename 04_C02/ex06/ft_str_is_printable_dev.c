/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:59:27 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:12:59 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[200] = "";
	char str2[] = {}; //I don't think this works
	char str3[] = "Hell0";
	char *str4 = "hello\7F";

	char c = 32;
	printf("Printable characters: ");
	for (int i = 32; i <= 126; i++)
	{
		str1[i] = i;
		printf("%c", str1[i]);
		c++;
	}
	printf("\n");
	for (int j = 248; j <= 255; j++)
	{
		str2[j] = j;
		printf("%c", j);
	}
	printf("\n");
	
	printf("Should be 1: %d\n", ft_str_is_printable(str1));
	printf("Should be 1: %d\n", ft_str_is_printable(str3));
	printf("Should be 0: %d\n", ft_str_is_printable(str4));
}
