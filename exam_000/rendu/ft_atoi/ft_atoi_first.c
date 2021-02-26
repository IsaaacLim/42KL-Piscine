int		ft_atoi(const char *str)
{
	int i;
	int number;
	int pow;

	i = 0;
	number = 0;
	pow = 1;
	while (str[i] != '\0')
	{
		number = number * pow + (str[i] - '0');
		pow = 10; 
		i++;
	}
	return (number);
}
