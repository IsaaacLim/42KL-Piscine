/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:06:17 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 20:06:18 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_valid(int grid[4][4], int row, int col, int num)
{
	int x;
	int y;

	x = 0;
	while (x <= 3)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	y = 0;
	while (y <= 3)
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	return (1);
}
