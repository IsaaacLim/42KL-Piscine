/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:39:08 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:05:01 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Should be 1: %d\n", ft_str_is_uppercase(str1));

	char str2[] = "AbCDEFG";
	printf("Should be 0: %d\n", ft_str_is_uppercase(str2));

	char str3[] = "^&@ABCD";
	printf("Should be 0: %d\n", ft_str_is_uppercase(str3));

	char str4[] = "";
	printf("Should be 1: %d\n", ft_str_is_uppercase(str4));
}
