/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_notes.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:45:42 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 22:57:14 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	ft_check_valid(char *str);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);

int		ft_base_num_len(unsigned int dec_num, int base_len)
{
	int base_num_len;
	int	remainder;

	base_num_len = 1; //even '0' needs 1 char
	remainder = dec_num / base_len;
	while (remainder > 0)
	{
		remainder /= base_len;
		base_num_len++;
	}
	return (base_num_len);
}

char	*ft_putnbr_base(unsigned int dec_num, char *base_to, int val)
{
	char	*arr;
	int		base_num_len;
	int		base_len;
	int		i;
	int		rev;

	base_len = ft_strlen(base_to);
	base_num_len = ft_base_num_len(dec_num, base_len);
	if (val == -1)
		base_num_len++;//extra space for '-'
	if (!(arr = (char *)malloc((base_num_len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	if (val == -1)
	{
		arr[0] = '-'; //fill front with '-'
		i++;
	}
	rev = base_num_len - 1;
	while (rev > i)
	{
		arr[rev] = base_to[dec_num % base_len]; //fill from back
		dec_num /= base_len;
		rev--;
	}
	arr[base_num_len] = '\0';
	return (arr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec_num;
	int		val;
	char	*last_base_num;

	if (!(ft_check_valid(base_from) && ft_check_valid(base_to)))
		return (NULL);
	dec_num = ft_atoi_base(nbr, base_from);
	val = 1;
	if (dec_num < 0)
	{
		dec_num *= -1; //pass +ve num to func
		val = -1; //indicate there's a -ve for space allocation
	}
	last_base_num = ft_putnbr_base(dec_num, base_to, val);
	return (last_base_num);
}
