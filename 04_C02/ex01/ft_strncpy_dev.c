/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_dev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:09:02 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 21:21:15 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n) //i < n to limit the range
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) //not <= cuz n=5 == dest[4]
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char			dest[20]; //not sure if size matters
	char			*str;
	unsigned int	n;

	str = "Hello World!";
	n = 9; //remainder will be filled with '\0'
	ft_strncpy(dest, str, n);
	printf("%s", dest);
}
