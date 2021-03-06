/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_row_lr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:06:56 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 22:18:11 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fill_row_rl(int *in_arr, int grid[4][4], int row, int col);

int		fill_one(int grid[4][4], int row, int col)
{
	if (grid[row][0] == 0 || grid[row][0] == 4)
		return (1);
	else
		return (0);
}

int		fill_four(int grid[4][4], int row, int col)
{
	if (grid[row][0] == 0 && grid[row][3] == 4)
		return (1);
	else if (grid[row][0] == 0 && grid[row][3] == 0)
		return (1);
	else if (grid[row][0] == 1 && grid[row][3] == 4)
		return (1);
	else if (grid[row][0] == 1 && grid[row][3] == 0)
		return (1);
	else
		return (0);
}

int		ft_fill_row_lr(int *in_arr, int grid[4][4], int row, int col)
{
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (in_arr[row + 8] == 1 && fill_one(grid, row, col) == 1)
				grid[row][0] = 4;
			else if (in_arr[row + 8] == 2)
				grid[row][col] = grid[row][col];
			else if (in_arr[row + 8] == 3)
				grid[row][col] = grid[row][col];
			else if (in_arr[row + 8] == 4 && fill_four(grid, row, col) == 1)
				grid[row][col] = col + 1;
			else
			{
				return (0);
			}
			col++;
		}
		row++;
	}
	return (ft_fill_row_rl(in_arr, grid, row, col));
}
