/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:22:15 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/11 23:01:00 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //remove
#include <stdlib.h>

int		ft_match(char c, char *charset)
{
	while (*charset)
	{
//		if (*charset == '\0')
//			return (c == '\0'); //??
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_splitx(char *str, char *charset)
{
	int		i;
	int		count;
	char	*old;
	char 	*new;

	count = 0;
	old = str;
	new = str;
	i = 0;
	while (str[i])
	{
		if (ft_match(str[i], charset) == 1)
		{
			new = &str[i];//including the charset char
	//		printf("str[%d], new: %s\n", i, new);
		}
		if (new - old > 1)//shorter string is bigger
		{
			count++;
	//		printf("new: %s, old: %s, n-o: %ld, count: %d\n", new, old, (new-old),count);
		}
		old = new;
	//	printf("i: %d, old: %s\n", i, old);
		i++;
	}
	return (count);//count of a split that isn't side by side (including the end)
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		add_part(char **start, char *old, int size, char *charset)
{
	if (ft_match(old[0], charset))
	{
		old++; //ignore the charset char
		size--; //ignore the charset char
	}
	*start = (char *)malloc((size + 3) * sizeof(char)); //arr in arr; +3??
	ft_strncpy(*start, old, size);
//	printf("%s, %s, %d\n",*start, old, size);
	(*start)[size] = '\0';//wrap my sting with charset char but can't be empty
	(*start)[size + 1] = '\0';//wrap my sting with charset char but can't be empty
	return (1);
}
char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	char	*old;
	char	*new;
	int		size;

	if (!(arr = (char **)malloc(ft_splitx(str, charset) * sizeof(char *) + 1)))//+2?
		return(0);
	old = str;
	new = str;
	i = 0;
	while (str[i])
	{
		if (ft_match(str[i], charset) == 1)
		{
			new = &str[i]; //including charset char
			printf("str[%d]: %s\n", i, new);
		}
		if ((size = new - old) > 1) //splits side-by-side not counted
			i += add_part(&arr[i], old, size, charset);
		old = new;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

int		main(void)
{
	char *str;
	char *charset;

	str = "Helloahellobahellocbaha";
	charset = "abc";
//	ft_splitx(str, charset);
	ft_split(str, charset);
}
