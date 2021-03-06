#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main()
{
	printf("Your number: %d, Expected number: 24\n", ft_iterative_factorial(4));
	printf("Your number: %d, Expected number: 1\n",ft_iterative_factorial(0));
	printf("Your number: %d, Expected number: 0\n",ft_iterative_factorial(-1));
	printf("Your number: %d, Expected number: 362880\n",ft_iterative_factorial(9));
}
