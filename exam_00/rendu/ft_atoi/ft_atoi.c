int		ft_atoi(const char *str)
{
	int i;
	int number;
	int pow;
	int negative;
	int n_count;

	i = 0;
	number = 0;
	pow = 1;
	negative = 1;
	n_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			negative *= -1;
			n_count++;
			if (n_count > 1)
			{
				number = 0;
				break ;
			}
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * pow + (str[i] - '0');
			pow = 10; 
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			break;
		i++;
	}
	number *= negative;
	return (number);
}
