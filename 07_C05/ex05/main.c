#include <stdio.h>

int		ft_sqrt(int nb);

int		main()
{
	printf("Your number: %d, Expected Number: 0\n", ft_sqrt(2147483647));
	printf("Your number: %d, Expected Number: 10831\n", ft_sqrt(117310561));
	printf("Your number: %d, Expected Number: 4\n", ft_sqrt(16));
	printf("Your number: %d, Expected Number: 10\n", ft_sqrt(100));
	printf("Your number: %d, Expected Number: 1\n",ft_sqrt(1));
	printf("Your number: %d, Expected Number: 0\n",ft_sqrt(0));
	printf("Your number: %d, Expected Number: 0\n",ft_sqrt(-5));
	printf("Your number: %d, Expected Number: 0\n",ft_sqrt(10));
}
