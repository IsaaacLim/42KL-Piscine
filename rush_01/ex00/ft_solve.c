/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:08:27 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 20:09:06 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_valid(int grid[4][4], int row, int col, int num);

int		ft_solve(int grid[4][4], int row, int col)
{
	int num;

	if (row == 3 && col == 4)
		return (1);
	if (col == 4)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return (ft_solve(grid, row, col + 1));
	num = 1;
	while (num <= 4)
	{
		if (ft_check_valid(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (ft_solve(grid, row, col + 1) == 1)
				return (1);
		}
		num++;
		grid[row][col] = 0;
	}
	return (0);
}
