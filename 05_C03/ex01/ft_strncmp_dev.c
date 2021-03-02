/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_dev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:22:52 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 12:16:23 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (*(unsigned char*)&s1[i] - *(unsigned char*)&s2[i]);
}

int		main(void)
{
	char			*str1;
	char			*str2;
	char			*str3;
	unsigned int	n;

	str1 = "hello";
	str2 = "Hello";
	str3 = "helloo";
	n = 5; //stops the comparison
	printf("ft, str1-str3: %d\n", ft_strncmp(str1, str3, n));
	printf("ori, str1-str3: %d\n", strncmp(str1, str3, n));
}
