/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle_dev.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:47:18 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 23:29:00 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h> //remove

bool		ft_is_valid(char grid[10][10], int row, int col)//row&col moving along
{
	int i;
	int j;

	i = -1; //try to use j >= 0 then j--
	while (++i < col) //check to left (col of the rows)
	{
		if (grid[row][i] > 0)
			return (false);
	}
	i = row + 1;
	j = col + 1;
	while (--i >= 0 && --j >= 0) //as long as one hits the corner; LEFT DIAGONAl
	{
		if (grid[i][j] > 0)
			return (false);
	}
	i = row - 1;
	j = col + 1;
	while (++i < 10 && --j >= 0) // row is 0-9; RIGHT DIAGONAL
	{
		if (grid[i][j] > 0)
			return (false);
	}
	return (true);
}

bool		ft_is_solved(char grid[10][10], char *sol, int col) //recursive call for col
{
	int i;

	if (col >= 4) //has to finish the last (0-9) FUNCTION WORKED UP TILL FOUR ONLY
		return (true); //end marker 1
	i = 0;
	while (i < 10)
	{
		if (ft_is_valid(grid, i, col)) //test the row of the given col
		{
			printf("worked");
			grid[i][col] = i; //fill test grid
			sol[col] = i; //fill sol array with the row num
			if (ft_is_solved(grid, sol, col + 1)) //recurse to try next col
			{
				printf("worked");
				return (true); //end marker 2
			}
			else //backtrack
			{
				printf("Failed");
				grid[i][col] = 0; //retry on next row
				sol[col] = 0;
			}
		}
		i++;
	}
	return (false); //if all fails
}

int			ft_ten_queens_puzzle(void)
{
	char grid[10][10];
	char sol[10];

	if (ft_is_solved(grid, sol, 0)) //start with col = 0
	{
		printf("%s\n", sol);
		return (1);
	}
	return (0);
}

int			main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
