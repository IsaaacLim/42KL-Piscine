/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_dev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 22:13:14 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/12 00:31:40 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totlen;
	char	*arr;

	if (size < 0)
		return (NULL);
	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
		*arr = 0;
		return (arr);
	}
	totlen = ft_ulstrlen(size, strs, sep);
	if (!(arr = (char *)malloc(totlen * sizeof(char) + 1)))
		return (0);
	*arr = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

int		main()
{
	int		len;
	char	*sep;
	char	*joint;
	char	*strs[5];
	char	s1[10] = "1";
	char	s2[10] = "11";
	char	s3[10] = "111";
	char	s4[10] = "1111";
	char	s5[10] = "11111";
	strs[0] = s1;
	strs[1] = s2;
	strs[2] = s3;
	strs[3] = s4;
	strs[4] = s5;
	sep = "-";

	len = ft_ulstrlen(5, strs, sep);
	printf("Total length: %d\n", len);

	joint = ft_strjoin(5, strs, sep);
	printf("Joint: %s\n", joint);

}
