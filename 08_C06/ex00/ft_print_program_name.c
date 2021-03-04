/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:55:10 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 16:31:34 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *argv)
{
	while (*argv)
		write(1, argv++, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
}
