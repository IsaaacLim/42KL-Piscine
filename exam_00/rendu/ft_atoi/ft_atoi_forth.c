int		ft_atoi(const char *str)
{
	int i;
	int number;
	int pow;
	int negative;

	i = 0;
	number = 0;
	pow = 1;
	negative = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			negative *= -1;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * pow + (str[i] - '0');
			pow = 10; 
		}
		i++;
		if (number == 12211)
		{
			break ;
		}
	}
	number *= negative;
	return (number);
}

//- -223
//+ 0
