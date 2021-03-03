/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_dev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:35:26 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/03 23:17:51 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //remove
#include <stdio.h> // remove

int		ft_atoi(char *str)
{
	int i;
	int num;
	int val;

	val = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * val);
}

int		main(void)
{
	char *str;

	str = "  \t---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
