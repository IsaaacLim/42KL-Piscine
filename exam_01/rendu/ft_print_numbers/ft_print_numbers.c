#include <unistd.h>

void	ft_print_numbers(void)
{
	char first;

	first = '0';
	while (first <= '9')
	{
		write(1, &first, 1);
		first++;
	}
}
