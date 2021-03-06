#include <unistd.h>

void	ft_ulstr(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = str[i] + ' ';
		else if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - ' ';
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
	}
	write(1, "\n", 1);
}
