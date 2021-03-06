#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main()
{
	printf("Your number: %d, Expected number: 1\n", ft_iterative_power(0, 0));
	printf("Your number: %d, Expected number: 0\n",ft_iterative_power(3, -1));
	printf("Your number: %d, Expected number: 16\n",ft_iterative_power(2, 4));
	printf("Your number: %d, Expected number: 15625\n",ft_iterative_power(5, 6));
}
