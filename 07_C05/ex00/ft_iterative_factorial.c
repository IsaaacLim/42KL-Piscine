/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:32:36 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/06 14:55:48 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	unsigned int factorial;
	unsigned int i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		factorial = 1;
		i = nb;
		while (i >= 1)
		{
			factorial = factorial * i;
			i--;
		}
	}
	return (factorial);
}
