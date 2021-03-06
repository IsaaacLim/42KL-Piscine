/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_col_du.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:06:35 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 22:28:20 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fill_row_lr(int *in_arr, int grid[4][4], int row, int col);

int		fill_one1(int grid[4][4], int row, int col)
{
	if (grid[3][col] == 0 || grid[3][col] == 4)
		return (1);
	else
		return (0);
}

int		fill_four1(int grid[4][4], int row, int col)
{
	if (grid[3][col] == 0 || grid[0][col] == 4)
		return (1);
	else
		return (0);
}

int		ft_fill_col_du(int *in_arr, int grid[4][4], int row, int col)
{
	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			if (in_arr[col + 4] == 1 && (fill_one1(grid, row, col) == 1))
				grid[3][col] = 4;
			else if (in_arr[col + 4] == 2)
				grid[row][col] = grid[row][col];
			else if (in_arr[col + 4] == 3)
				grid[row][col] = grid[row][col];
			else if (in_arr[col + 4] == 4 && (fill_four1(grid, row, col) == 1))
				grid[row][col] = 4 - row;
			else
			{
				return (0);
			}
			row++;
		}
		col++;
	}
	return (ft_fill_row_lr(in_arr, grid, row, col));
}
