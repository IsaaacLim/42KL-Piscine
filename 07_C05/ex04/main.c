/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatan <gatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:29:48 by gatan             #+#    #+#             */
/*   Updated: 2021/03/01 21:44:31 by gatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main()
{
	printf("Your output:%d Expected output: 144\n",ft_fibonacci(12));
	printf("Your output:%d Expected output: -1\n",ft_fibonacci(-5));
	printf("Your output:%d Expected output: 0\n",ft_fibonacci(0));
	printf("Your output:%d Expected output: 1\n",ft_fibonacci(1));
	printf("Your output:%d Expected output: 1\n",ft_fibonacci(2));
}
