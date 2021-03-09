/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_details.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:22:30 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/09 20:32:39 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_MAP_DETAILS_C
# define GET_MAP_DETAILS_C

# include "ft.h"

#endif

int		ft_getmapdata(char *map_data)
{
	int			i;
	extern char	g_full;
	extern char	g_obstcle;
	extern char	g_empty;
	extern int	g_map_start;

	i = 0;
	while (map_data[i] != '\n')
		i++;
	g_full = map_data[i - 1];
	g_obstacle = map_data[i - 2];
	g_empty = map_data[i - 3];
	g_map_start = i + 1;
	g_row = ft_atoi(map_data, (i - 3));
	g_col = get_col(map_data);
	return (0);
}

int		get_row(char *map_data)
{
	char		*map;
	extern int	g_size;
	extern int	g_map_start;
	int			local_size;
	int			row;

	map = map_data + g_map_start;
	local_size = g_size - g_map_start;
	row = 0;
	while (local_size)
	{
		if (*map == '\n')
			row++;
		local_size--;
		map++;
	}
	return (row);
}

int		get_col(char *map_data)
{
	int			col;
	char		*map;
	extern int	g_map_start;

	col = 0;
	map = map_data + g_map_start;
	while (*map != '\n')
	{
		col++;
		map++;
	}
	return (col);
}
