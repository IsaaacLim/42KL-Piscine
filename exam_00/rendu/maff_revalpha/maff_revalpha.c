#include <unistd.h>

int		main(void)
{
	char a;
	char b;

	a = 'z';
	b = 'Y';

	while (b >= 'A')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a -= 2;
		b -= 2;
	}
	write(1, "\n", 1);	
}
