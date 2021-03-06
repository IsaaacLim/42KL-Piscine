/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:47:18 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 23:28:44 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool		ft_is_valid(char grid[10][10], int row, int col)
{
	int i;
	int j;

	i = -1;
	while (++i < col)
	{
		if (grid[row][i] > 0)
			return (false);
	}
	i = row + 1;
	j = col + 1;
	while (--i >= 0 && --j >= 0)
	{
		if (grid[i][j] > 0)
			return (false);
	}
	i = row - 1;
	j = col + 1;
	while (++i < 10 && --j >= 0)
	{
		if (grid[i][j] > 0)
			return (false);
	}
	return (true);
}

bool		ft_is_solved(char grid[10][10], char *sol, int col)
{
	int i;

	if (col >= 4)
		return (true);
	i = 0;
	while (i < 10)
	{
		if (ft_is_valid(grid, i, col))
		{
			grid[i][col] = i;
			sol[col] = i;
			if (ft_is_solved(grid, sol, col + 1))
				return (true);
			else
			{
				grid[i][col] = 0;
				sol[col] = 0;
			}
		}
		i++;
	}
	return (false);
}

int			ft_ten_queens_puzzle(void)
{
	char grid[10][10];
	char sol[10];

	if (ft_is_solved(grid, sol, 0))
	{
		printf("%s\n", sol);
		return (1);
	}
	return (0);
}
