/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:33:01 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 17:06:21 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *argv)
{
	while (*argv)
	{
		write(1, argv++, 1);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc) //i < argc to avoid '\0'
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

/********** Method 2 ************/
int		main(int argc, char **argv)
{
	int str_num;
	int str_len;

	str_num = 1;
	while (str_num < argc)
	{
		str_len = 0;
		while (argv[str_num][str_len] != '\0')
			str_len++;
		write(1, argv[str_num], str_len);
		write(1, "\n", 1);
		str_num++;
	}
}
