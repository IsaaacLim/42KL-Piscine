/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:09:51 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 18:24:01 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] && str2[i] && (str1[i] == str2[i]))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

void	ft_putstr(char *argv)
{
	while (*argv)
		write(1, argv++, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	temp = "";
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) >= 1)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
