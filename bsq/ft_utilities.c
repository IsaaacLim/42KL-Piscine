/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:14:31 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/09 20:30:13 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILITIES_C
# define FT_UTILITIES_C

# include "ft.h"

#endif

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putarr(char **arr)
{
	int			i;
	int			j;
	extern int	g_row;
	extern int	g_col;

	i = 0;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		ft_atoi(char *str, int range)
{
	int i;
	int num;

	num = 0;
	i = 0;
	while (i < range)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}
