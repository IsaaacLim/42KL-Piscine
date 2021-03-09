/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:24:19 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/09 19:47:48 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_MAP_C
# define READ_MAP_C

# include "ft.h"

#endif

int		open_map(const char *map_filename)
{
	int map_filedes;

	if ((map_filedes = open(map_filename, O_RDONLY)) < 0)
	{
		ft_putstr("Failed to open map file.\n");
		return (0);
	}
	return (map_filedes);
}

int		read_map(int map_filedes, char **data)
{
	char		buffer[1000];
	extern int	g_size;

	if ((g_size = (read(map_filedes, buffer, 1000))) < 1)
	{
		ft_putstr("Failed to read map file.\n");
		return (0);
	}
	*data = malloc(g_size * sizeof(char));
	ft_strncpy(*data, buffer, g_size);
	return (1);
}

void	ft_std_input(void)
{
	int		fd;
	char	*buffer;
	int		ret;

	fd = open("./input.txt", O_RDWR | O_CREAT, 0700);
	buffer = (char*)malloc(1 * sizeof(char));
	while ((ret = read(0, buffer, 20)))
		write(fd, buffer, ret);
	close(fd);
	close(ret);
	free(buffer);
}
