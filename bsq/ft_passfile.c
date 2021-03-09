/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_passfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:39:10 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/09 20:30:47 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PASSFILE_C
# define FT_PASSFILE_C

# include "ft.h"

#endif

int		ft_passfile(char *argv)
{
	char	*map_data;
	char	**map_array;
	int		**num_map;

	if (!(read_map(open_map(argv), &map_data)))
		return (0);
	if (!(allocate_map_arr(&map_array, map_data)))
		return (0);
	write_map_arr(map_array, map_data);
	ft_allocate_num_map(&num_map);
	ft_fill_num_map(map_array, num_map);
	ft_find_square(num_map);
	ft_fill_square(map_array, num_map);
	ft_putarr(map_array);
	free(num_map);
	free(map_array);
	return (1);
}
