/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:24:01 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/06 13:43:56 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		sqrt = 0;
		while (sqrt <= nb / 2)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
