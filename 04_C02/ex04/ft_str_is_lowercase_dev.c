/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:26:27 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:04:19 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

int		ft_size_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "abcdefghijklmnopqrstuvwxyz";
	printf("Should be 1: %d\n", ft_size_is_lowercase(str1));

	char str2[] = "abcdeFghijklmnopqrstuvwxyz";
	printf("Should be 0: %d\n", ft_size_is_lowercase(str2));

	char str3[] = "abcdefghijklmnopqrst?";
	printf("Should be 0: %d\n", ft_size_is_lowercase(str3));

	char str4[] = "";
	printf("Should be 1: %d\n", ft_size_is_lowercase(str4));
}
