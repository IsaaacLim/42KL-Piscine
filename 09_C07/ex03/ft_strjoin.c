/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 22:13:14 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:45:43 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_ulstrlen(int size, char **strs, char *sep)
{
	int i;
	int	totlen;

	totlen = 0;
	i = 0;
	while (i < size)
	{
		totlen += ft_strlen(strs[i]);
		i++;
	}
	totlen += (size - 1) * ft_strlen(sep);
	return (totlen);
}

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totlen;
	char	*arr;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
		*arr = 0;
		return (arr);
	}
	totlen = ft_ulstrlen(size, strs, sep);
	if (!(arr = (char *)malloc(totlen * sizeof(char) + 1)))
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (!(i == size - 1))
			ft_strcat(arr, sep);
		i++;
	}
	ft_strcat(arr, "\0");
	return (arr);
}
