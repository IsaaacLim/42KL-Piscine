/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:06:43 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 22:43:01 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp[size];
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[size - 1 - i];
		i++;
	}
	j = 0;
	while (j < size)
	{
		tab[j] = temp[j];
		j++;
	}
}
