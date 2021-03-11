/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab_notes.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:17:30 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 11:49:32 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRS_TO_TAB_C
# define FT_STRS_TO_TAB_C

# include "ft_stock_str.h"
# include <stdlib.h>

#endif

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	if (!(dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)))
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int 				i;
	struct s_stock_str	*arr; //t_stock_str <- interchangable

	// void type; space created for all argc, +1 for {..,{0}}
	if (!(arr = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);//strlen of arg i
		arr[i].str = av[i]; //str of arg i
		arr[i].copy = ft_strdup(av[i]);//copy of str arg i
		i++;
	}
	arr[i].str = 0;//{{}, {}, {}, {0}}
	arr[i].copy = 0;
	//or arr[i] = (struct s_stock_str){0, 0, 0} //append 0 to each variables
	return(arr);//returns the address of an array that contains other arrays
}
