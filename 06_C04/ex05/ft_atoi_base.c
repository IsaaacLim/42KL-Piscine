/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:43:22 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/03 22:51:57 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		ft_check_valid(char *base)
{
	int base_len;
	int i;
	int j;

	base_len = ft_strlen(base);
	if (base[0] == '\0' || base_len <= 1)
		return (0);
	i = 0;
	while (i <= base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (j < base_len)
		{
			if (base[i] == base[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (base_len);
}

int		ft_cnvrt_dec(char str_char, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (str_char == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi(char *str, char *base, int base_len)
{
	int i;
	int val;
	int num;
	int total;

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
	total = 0;
	while ((num = ft_cnvrt_dec(str[i], base)) != -1)
	{
		total = total * base_len + num;
		i++;
	}
	return (total * val);
}

int		ft_atoi_base(char *str, char *base)
{
	int base_len;
	int final;

	base_len = ft_check_valid(base);
	if (base_len < 2)
		return (0);
	else
		final = ft_atoi(str, base, base_len);
	return (final);
}
