/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:06:38 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 10:53:39 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Remove
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; //add '\0' to the end of the array
	return (dest); //return array (address)
}

int		main(void)
{
	char dest[6]; //seem like the size here doesn't matter

	char str1[6] = "Hello";
	ft_strcpy(dest, str1);
	printf("%s", dest);

	char *str2;
	str2 = " World!"; //char pointer against a string lateral (stored as constant)
	ft_strcpy(dest, str2); //str2 is passed as a const. Can't be modified in the func
	printf("%s\n", dest);

	char *p; //seems like the limiting factor for only 1 char
	p = ft_strcpy(dest, str1);
	printf("%c\n", *p);
	
	//Pass argument to func: str1 == &str[0]
	
	//Another usage method
	char str3[100];
	strcpy(str3, "Welcome");
	printf("%s\n", str3);
}
