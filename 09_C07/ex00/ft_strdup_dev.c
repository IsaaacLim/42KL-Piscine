/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_dev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:22:16 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:48:12 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //remove

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	if (!(dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)))//+1 for NULL
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char *src;
	char *cpy;

	src = "Hello There";
	cpy = ft_strdup(src);
	printf("Ori: %s, %p\n", src, src);
	printf("Copy: %s, %p\n", cpy, cpy);
//	free(src);//can't include; how to free dest?
}
