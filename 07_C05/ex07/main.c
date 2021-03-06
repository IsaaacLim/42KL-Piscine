#include <stdio.h>

int ft_find_next_prime(int nb);

int main()
{
	printf("Expected 2147483647,\nReturned %d\n", ft_find_next_prime(2147483647));
	printf("Expected 2147483647,\nReturned %d\n", ft_find_next_prime(2147483644));
	printf("Expected 7901,\nReturned %d\n", ft_find_next_prime(7884));
	printf("Expected 2,\nReturned %d\n", ft_find_next_prime(-1));
	printf("Expected 2,\nReturned %d\n", ft_find_next_prime(2));
}
