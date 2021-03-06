/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:05:59 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 21:27:38 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		ft_change_input(int argc, char **argv, int *in_arr)
{
	int i;

	if (argc == 17)
	{
		i = 0;
		while (i + 1 < 17)
		{
			if (argv[i + 1][0] >= '1' && argv[i + 1][0] <= '4')
				in_arr[i] = argv[i + 1][0] - '0';
			else
			{
				ft_putstr("Error: Input 16 numbers (from 1 to 4)\n");
				return (0);
			}
			i++;
		}
	}
	else
	{
		ft_putstr("Error: Input (16 numbers) from 1 to 4\n");
		return (0);
	}
	return (1);
}
