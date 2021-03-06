/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:09:15 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/28 21:55:07 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_change_input(int argc, char *argv[], int *in_arr);
int		ft_fill_col_ud(int *in_arr, int grid[4][4], int row, int col);
int		ft_solve(int grid[4][4], int row, int col);
void	ft_putstr(char *str);
void	ft_putarr(int arr[4][4]);

int		main(int argc, char *argv[])
{
	int in_arr[16];
	int grid[4][4];
	int row;
	int col;

	if (ft_change_input(argc, argv, in_arr) == 0)
		return (0);
	else if (ft_fill_col_ud(in_arr, grid, row, col) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
	{
		ft_putarr(grid);
		ft_putstr("\n");
	}
	if (ft_solve(grid, 0, 0) == 0)
		ft_putstr("Error\n");
	else
		ft_putarr(grid);
	return (0);
}
