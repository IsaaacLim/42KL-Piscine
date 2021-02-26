char	*ft_strrev(char *str)
{
	int		count;
	char	temp[9999];
	int		i;

	count = 0;
	while (str[count] != '\0')
	{
		temp[count] = str[count];
		count++;
	}
	i = 0;
	while (count >= 0)
	{
		str[i - 1] = temp[count];
		i++;
		count--;
	}
	return (str);
}
