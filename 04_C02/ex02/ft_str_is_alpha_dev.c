/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:56:06 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 10:57:58 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0); //function stops here
	}
	return (1);
}

int		main(void)
{
	char str[6] = "H3llo";
	printf("Should be 0: %d\n", ft_str_is_alpha(str));

	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Should be 1: %d\n", ft_str_is_alpha(str1));

	char str2[6] = "";
	printf("Should be 1: %d\n", ft_str_is_alpha(str2));
}
