#include <stdlib.h>
#include <stdio.h>

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
//			printf("%d, %s, %d, %d\n", number, str, i, pow);
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			break;
		i++;
	}
	number *= negative;
	return (number);
}

int		main(void)
{
	char str1[] = "";
	char str2[] = "\"21" "2313\"";
	char str3[] = "2147483647";
	char str4[]	= "-2147483648";
	char str5[] = "0";
	char str6[] = "12211t11";
	char str7[] = "--223";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	printf("%d\n", ft_atoi(str6));
	printf("%d\n", ft_atoi(str7));

}
