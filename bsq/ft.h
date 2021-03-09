/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:22:37 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/09 22:36:24 by hloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char		g_empty;
char		g_obstacle;
char		g_full;
int			g_row;
int			g_col;
int			g_size;
int			g_map_start;
int			g_max_square;

char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		**write_map_arr(char **map_array, char *map_data);
int			read_map(int map_filedes, char **data);
int			allocate_map_arr(char ***map_array, char *map_data);
int			open_map(const char *map_filename);
int			validate_map(char *map_data);
int			get_col(char *map_data);
int			get_row(char *map_data);
int			ft_getmapdata(char *map_data);
int			ft_atoi(char *str, int range);
int			ft_passfile(char *argv);
void		ft_std_input(void);
void		ft_allocate_num_map(int ***num_map);
void		ft_fill_num_map(char **map_array, int **num_map);
void		ft_find_square(int **num_map);
void		ft_fill_square(char **map_array, int **num_map);
void		ft_putarr(char **arr);
void		ft_putchar(char c);
void		ft_putstr(char *str);

#endif
