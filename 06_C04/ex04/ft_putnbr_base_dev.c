/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_dev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:57:22 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/03 22:56:18 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //remove

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
			if (base[i] == base[j + 1]) //+1 to avoid NULL
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
		ft_putchar(base[nb]); //write(1, &(base[nb%base_len]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = ft_check_valid(base);
	if (ft_check_valid(base) > 1)
		ft_convert_base(nbr, base, base_len);
}

int		main(void)
{
	int max = 2147483647;
	int min = -2147483648;
	int normal = 10;
	char *base = "0123456789";
	char *base1 = "1";
	char *base2 = "10";
	char *base3 = "repeated";
//	char *base4 = "\n\t";

	printf("Base10 min: ");
	ft_putnbr_base(min, base);
	printf("\nError1 max: ");
	ft_putnbr_base(max, base1);
	printf("\nBase2 min: ");
	ft_putnbr_base(min, base2);
//	printf("\nBase4 noormal: ");
//	ft_putnbr_base(normal, base4);
	printf("\nError3 normal: ");
	ft_putnbr_base(normal, base3);
}
