/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_col_ud.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:06:45 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 22:18:32 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fill_col_du(int *in_arr, int grid[4][4], int row, int col);

int		ft_fill_col_ud(int *in_arr, int grid[4][4], int row, int col)
{
	int n;

	col = 0;
	while (col < 4)
	{
		n = 4;
		row = 0;
		while (row < 4)
		{
			if (in_arr[col] == 1)
			{
				grid[row][col] = n;
				n = 0;
			}
			else if (in_arr[col] == 2)
				grid[row][col] = 0;
			else if (in_arr[col] == 3)
				grid[row][col] = 0;
			else
				grid[row][col] = row + 1;
			row++;
		}
		col++;
	}
	return (ft_fill_col_du(in_arr, grid, row, col));
}
