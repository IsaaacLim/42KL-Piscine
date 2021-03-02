/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:54:25 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 09:37:28 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_len;
	unsigned int s_len;
	unsigned int i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size < d_len)
		return (s_len + size);
	if (size > d_len)
	{
		i = 0;
		while (src[i] && i < size - d_len - 1)
		{
			dest[d_len + i] = src[i];
			i++;
		}
		dest[d_len + i] = '\0';
	}
	return (d_len + s_len);
}
