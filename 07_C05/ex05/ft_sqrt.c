/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:24:01 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/06 20:26:27 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int sqrt;
	unsigned int sqr;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		sqrt = 0;
		while ((sqr = sqrt * sqrt) <= (unsigned)nb)
		{
			if (sqr == (unsigned)nb)
				return ((int)sqrt);
			sqrt++;
		}
	}
	return (0);
}
