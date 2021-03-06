#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
	printf("Expected 0, Returned %d\n", ft_is_prime(-1));
	printf("Expected 1, Returned %d\n", ft_is_prime(2));
	printf("Expected 0, Returned %d\n", ft_is_prime(1));
	printf("Expected 0, Returned %d\n", ft_is_prime(8));
	printf("Expected 1, Returned %d\n", ft_is_prime(5));
	printf("Expected 0, Returned %d\n", ft_is_prime(22));
	printf("Expected 1, Returned %d\n", ft_is_prime(101));
	printf("Expected 0, Returned %d\n", ft_is_prime(1071));
	printf("Expected 1, Returned %d\n", ft_is_prime(2147483647));
}
