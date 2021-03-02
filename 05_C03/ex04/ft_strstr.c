/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:16:28 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 12:17:15 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (to_find[tf_idx + 1] == '\0')
				return (str + s_idx);
			tf_idx++;
		}
		s_idx++;
	}
	return (0);
}
