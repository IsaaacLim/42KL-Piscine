/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_row_rl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:07:17 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 22:42:20 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fill_one2(int grid[4][4], int row, int col)
{
	if (grid[row][3] == 0 || grid[row][3] == 4)
		return (1);
	else
		return (0);
}

int		fill_four2(int grid[4][4], int row, int col)
{
	if (grid[row][0] == 0 && grid[row][3] == 1)
		return (1);
	else if (grid[row][0] == 0 && grid[row][3] == 0)
		return (1);
	else if (grid[row][0] == 4 && grid[row][3] == 1) 
		return (1);
	else if (grid[row][0]== 4 && grid[row][3]== 0)
		return (1);
	else
		return (0);
}

int		ft_fill_row_rl(int *in_arr, int grid[4][4], int row, int col)
{
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (in_arr[row + 12] == 1 && fill_one2(grid, row, col) == 1)
				grid[row][3] = 4;
			else if (in_arr[row + 12] == 2)
				grid[row][col] = grid[row][col];
			else if (in_arr[row + 12] == 3)
				grid[row][col] = grid[row][col];
			else if (in_arr[row + 12] == 4 && fill_four2(grid, row, col) == 1)
				grid[row][col] = 4 - col;
			else
			{
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
