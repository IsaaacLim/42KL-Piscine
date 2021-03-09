/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:55:02 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/09 19:14:09 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATE_MAP_C
# define VALIDATE_MAP_C

# include "ft.h"

#endif

static char *g_map;

static int	valid_metadata(void)
{
	int		ret;
	char	*map2;

	ret = 1;
	map2 = g_map;
	if (g_empty == g_obstacle || g_obstacle == g_full || g_empty == g_full)
		ret = 0;
	if (*(map2 + g_map_start - 1) != '\n')
		ret = 0;
	if (!(g_empty >= ' ' && g_empty <= '~'))
		ret = 0;
	if (!(g_obstacle >= ' ' && g_obstacle <= '~'))
		ret = 0;
	if (!(g_full >= ' ' && g_full <= '~'))
		ret = 0;
	if (g_row != get_row(map2))
		ret = 0;
	return (ret);
}

static int	map_is_same_length(void)
{
	int			i;
	char		*map2;
	int			ret;
	extern int	g_map_start;

	i = 0;
	map2 = g_map + g_map_start;
	ret = 1;
	while (i < g_row)
	{
		if (map2[(i * (g_col + 1)) + g_col] != '\n')
			ret = 0;
		i++;
	}
	return (ret);
}

static int	has_one_line_one_box(void)
{
	return (g_row > 0 && g_col > 0);
}

static int	is_valid_character(void)
{
	int			i;
	int			j;
	char		*map2;
	int			ret;
	int			offset;

	offset = 0;
	i = 0;
	map2 = g_map + g_map_start;
	ret = 1;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			if (map2[i * g_col + j + offset] == '\n')
				offset++;
			if (!(map2[i * g_col + j + offset] == g_empty ||
					map2[i * g_col + j + offset] == g_obstacle))
				ret = 0;
			j++;
		}
		i++;
	}
	return (ret);
}

int			validate_map(char *map_data)
{
	extern char	*g_map;
	extern int	g_row;
	extern int	g_col;

	g_map = map_data;
	ft_getmapdata(map_data);
	if (!valid_metadata())
		return (0);
	if (map_is_same_length() &&
				has_one_line_one_box() &&
				is_valid_character())
		return (1);
	else
		return (0);
}
