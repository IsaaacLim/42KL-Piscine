/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:21:14 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/04 23:46:45 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int total;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	total = 1;
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
