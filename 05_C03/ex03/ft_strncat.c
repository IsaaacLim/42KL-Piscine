/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:44:06 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/01 21:42:48 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int d_len;
	unsigned int i;

	d_len = 0;
	while (dest[d_len])
		d_len++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char *src;
	char dest[24];

	src = " World!";
	strcpy(dest, "Hello");

	//man's guide to avoid truncation of dest
	if (strlen(src) + 1 > sizeof(dest) - strlen(dest))
		printf("Onstack would be truncated\n");
	else strncat(dest, src, sizeof(dest) - strlen(dest) - 1);

	printf("Ori: %s\n", dest);

	ft_strncat(dest, src, sizeof(dest) - strlen(dest) - 1);
	printf("Ori: %s\n", dest);

	char *p;
	p = ft_strncat(dest, src, sizeof(dest) - strlen(dest) - 1);
	printf("Ori: %s\n", dest);
}
