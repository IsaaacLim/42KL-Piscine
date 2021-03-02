/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:02:41 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 11:21:41 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remove
#include <stdio.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ' ';
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	first;

	ft_strlowcase(str);
	i = 0;
	first = true;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			first = true;
		if (str[i] >= '0' && str[i] <= '9')
			first = false;
		if (first && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ' ';
			first = false;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str1));

//	char *str2;
//	str2 = ft_strcapitalize(str1);
//	printf("%s\n", *str2); //only 1 char is printed
	
	char str2[] = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	(ft_strcapitalize(str2));
	printf("%s\n", str2); //should be like this
}
