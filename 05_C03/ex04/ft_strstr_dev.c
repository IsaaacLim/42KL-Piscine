/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:16:28 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/01 21:46:22 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int s_idx;
	int tf_idx;

	if (*to_find == '\0')
		return (str);
	s_idx = 0;
	while (str[s_idx])
	{
		tf_idx = 0;
		while (str[s_idx + tf_idx] == to_find[tf_idx])
		{
			if (to_find[tf_idx + 1] == '\0')//so while loop won't break first
				return (str + s_idx); //s_idx stops at the first matched char
			tf_idx++;
		}
		s_idx++;
	}
	return (0);
}

int		main(void)
{
	char *needle;
	char *haystack;
	char *result;

	needle = "programming";
	haystack = "learnprogrammingyourself";
	
	//Original Library Func
	result = strstr(haystack, needle);
	if (result)
	{
		printf("The needle is present\n");
		printf("The remaining string is: %s\n", result);
	}
	else
		printf("Not present\n");

	//My Func
	char *my_res;
	my_res = (ft_strstr(haystack, needle));
	if (my_res)
	{
		printf("The needle is present\n");
		printf("The remaining string is: %s\n", my_res);
	}
	else
		printf("Not present\n");
}
