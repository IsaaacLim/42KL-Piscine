/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:50:51 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:14:52 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ' '; //ASCII dec = 32
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZD";
	char str2[] = "skfD12-!I";
//	char *str3 = "Hello"; //const, can't be changed
	char str3[] = "Hello";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
}
