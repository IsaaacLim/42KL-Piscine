/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:03:07 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 22:44:37 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dextohex(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		j = 0;
		while (j < 2)
		{
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
			j++;
		}
		ft_putchar(' ');
		i++;
	}
}

int		ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if ((ft_char_is_printable(c) == 1))
			ft_putchar(c);
		else
		{
			ft_putchar('.');
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	arr[size];

	if (size == 0)
		return (0);
	while ((char *)addr)
	{
		i = 0;
		while (i < 16)
		{
			arr[i] = *(char *)addr;
			i++;
			addr++;
		}
		ft_dextohex(arr);
		ft_putstr_non_printable(arr);
		ft_putchar('\n');
	}
	return (addr);
}

int		main(void)
{
	char *str;

	str = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(str, 1500);
}
