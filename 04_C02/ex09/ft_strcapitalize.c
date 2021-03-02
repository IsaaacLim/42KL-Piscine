/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:02:41 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 17:49:55 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
