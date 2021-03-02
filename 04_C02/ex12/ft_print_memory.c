/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:03:07 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/02 17:52:43 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_nonprintable(char *c)
{
	int i;

	i = 0;
	while (*c && *c >= ' ' && *c <= 126)
	{
		write(1, &"0123456789abcdef"[*c / 16], 1);
		write(1, &"0123456789abcdef"[*c % 16], 1);
		c++;
	}
}

void	ft_printable(char *c)
{
	int i;

	i = 0;
	while (c[i] && c[i] >= ' ' && c[i] <= 126)
		i++;
	write(1, c, i);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *add;

	add = addr;
	size += 1;
	ft_nonprintable(add);
	ft_printable(": ");
	ft_printable(add);
	return (addr);
}
