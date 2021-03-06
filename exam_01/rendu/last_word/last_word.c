#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *last_word)
{
	while (*last_word)
		write(1, last_word++, 1);
}

int		ft_strlen(char *argv)
{
	int count;

	count = 0;
	while (argv[count])
		count++;
	return (count);
}

void	ft_last_word(char *argv)
{
	char	*word;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(argv);
	word = argv;
	i = 0;
	while (i < len)
	{
		while ((argv[i] == ' ' || argv[i] == '\t') && argv[i])
			i++;
		if (argv[i] == '\0')
			break ;
		j = 0;
		while (argv[i] != ' ' && argv[i] != '\t' && argv[i])
		{
			word[j] = argv[i];
			j++;
			i++;
		}
		i++;
	}
	word[j] = '\0';
	ft_putstr(word);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	write(1, "\n", 1);
}
