/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:25:55 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:01:46 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char str1[] = "0123456789";
	printf("Should be 1: %d\n", ft_str_is_numeric(str1));

	char str2[] = {'0', 'a', '7'};
	printf("Should be 0: %d\n", ft_str_is_numeric(str2));

	char str3[] = "";
	printf("Should be 1: %d\n", ft_str_is_numeric(str3));
}
