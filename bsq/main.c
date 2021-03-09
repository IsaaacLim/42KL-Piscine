/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:09:37 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/09 17:42:36 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_C
# define MAIN_C

# include "ft.h"

#endif

int		main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
	{
		ft_std_input();
		ft_passfile("input.txt");
	}
	else if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			ft_passfile(argv[i]);
			i++;
		}
	}
}
