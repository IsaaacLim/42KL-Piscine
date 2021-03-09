/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:33:26 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/09 22:29:14 by hloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLVE_C
# define FT_SOLVE_C

# include "ft.h"

#endif

void	ft_allocate_num_map(int ***num_map)
{
	int			i;
	extern int	g_row;
	extern int	g_col;

	*num_map = malloc(g_row * sizeof(int *));
	i = 0;
	while (i < g_row)
	{
		(*num_map)[i] = malloc(g_col * sizeof(int));
		i++;
	}
}

void	ft_fill_num_map(char **map_array, int **num_map)
{
	int i;
	int j;

	i = 0;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			if (map_array[i][j] == g_empty)
				num_map[i][j] = 1;
			else if (map_array[i][j] == g_obstacle)
				num_map[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		ft_min(int **num_map, int i, int j)
{
	int min;

	min = num_map[i - 1][j - 1];
	if (num_map[i - 1][j] < min)
		min = num_map[i - 1][j];
	if (num_map[i][j - 1] < min)
		min = num_map[i][j - 1];
	return (min);
}

void	ft_find_square(int **num_map)
{
	int max;
	int i;
	int j;

	max = 1;
	i = 1;
	while (i < g_row)
	{
		j = 1;
		while (j < g_col)
		{
			if (num_map[i - 1][j - 1] >= 0 && num_map[i][j] != 0)
				num_map[i][j] = 1 + (ft_min(num_map, i, j));
			if (max < num_map[i][j])
				max = num_map[i][j];
			j++;
		}
		i++;
	}
	g_max_square = max;
}

void	ft_fill_square(char **map_array, int **num_map)
{
	int i;
	int j;
	int width;
	int height;
	int flag;

	i = -1;
	while (++i < g_row && flag != 0)
	{
		j = -1;
		while (++j < g_col && flag != 0)
		{
			if (num_map[i][j] == g_max_square)
			{
				width = -1;
				while (++width < g_max_square)
				{
					height = -1;
					while (++height < g_max_square)
						map_array[i - height][j - width] = g_full;
				}
				flag = 0;
			}
		}
	}
}
