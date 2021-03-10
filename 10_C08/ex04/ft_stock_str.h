/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:23:02 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/10 16:39:34 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct		s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}					t_stock_str;
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
