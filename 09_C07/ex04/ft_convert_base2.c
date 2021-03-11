/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:39:15 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:59:57 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

bool	ft_check_valid(char *str)
{
	int strlen;
	int	i;
	int	j;

	strlen = ft_strlen(str);
	if (str[0] == '\0' || strlen <= 1)
		return (0);
	i = 0;
	while (i <= strlen)
	{
		if (str[i] == '+' || str[i] == '-' || (str[i] >= 9 && str[i] <= 13))
			return (false);
		j = i;
		while (j < strlen)
		{
			if (str[i] == str[j + 1])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

int		ft_cnvrt_to_dec(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int dec_num;
	int num;
	int	i;
	int val;

	base_len = ft_strlen(base);
	val = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val *= -1;
		i++;
	}
	dec_num = 0;
	while ((num = ft_cnvrt_to_dec(str[i], base)) != -1)
	{
		dec_num = dec_num * base_len + num;
		i++;
	}
	return (dec_num * val);
}
