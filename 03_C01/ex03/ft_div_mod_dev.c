/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:49:02 by jinlim            #+#    #+#             */
/*   Updated: 2021/02/23 12:27:06 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	printf("Before: %d %d\n", div, mod);
	ft_div_mod(13, 10, &div, &mod);
	printf("After: %d %d\n", div, mod);
}
