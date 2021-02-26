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
			i++;
			negative *= -1;
		}
		number = number * pow + (str[i] - '0');
		pow = 10; 
		i++;
	}
	number *= negative;
	return (number);
}

//-1221711...
//+12211
