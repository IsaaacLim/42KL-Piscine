/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:52:06 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/01 19:43:14 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int d_len;
	int i;

	d_len = 0;
	while (dest[d_len])
		d_len++;
	i = 0;
	while (src[i])
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0'; //dest itself is changed
	return (dest); //returns the pointer to dest
}
int		main(void)
{
//	char *dest; //constant array can't be changed by func
	char dest[100]; //reduce sice to get error
	char *src;

//	dest = "Hello"; //syntax error
	strcpy(dest, "Hello");
	src = " World!";

	//3 Usage methods
	printf("Ori: %s\n", strcat(dest, src));

	strcat(dest, src);
	printf("Ori2: %s\n", dest);

	char *p;
	p = strcat(dest, src); //as this func return as pointer to the array
	printf("Ori3: %s\n", p); //no need to dereference array pointers (?)

	//ft_strcat
	strcpy(dest, "Hello");
	printf("ft: %s\n", ft_strcat(dest, src));
	ft_strcat(dest, src);
	printf("ft: %s\n", dest);
	char *d;
	d = ft_strcat(dest, src);
	printf("ft: %s\n", d);
}
