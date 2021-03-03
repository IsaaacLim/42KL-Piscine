/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:57:22 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/03 22:55:56 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_convert_base(int nb, char *base, int base_len)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_convert_base(-(nb / base_len), base, base_len);
		ft_putchar(base[-(nb % base_len)]);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_convert_base(-nb, base, base_len);
	}
	else if (nb > base_len - 1)
	{
		ft_convert_base(nb / base_len, base, base_len);
		ft_convert_base(nb % base_len, base, base_len);
	}
	else
		ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = ft_check_valid(base);
	if (ft_check_valid(base) > 1)
		ft_convert_base(nbr, base, base_len);
}
