#include <stdlib.h>
#include <stdio.h> //remove
#include <string.h> //remove

int		ft_distance(int start, int end)
{
	unsigned int dst;

	dst = 1;
	if (end > start)
	{
		while (end > start)
		{
			end--;
			dst++;
		}
	}
	else if (end < start)
	{
		while (end < start)
		{
			end++;
			dst++;
		}
	}
	else
		dst = 0;
	return (dst);
}

int		*ft_rrange(int start, int end)
{
	int i;
	int *arr;
	unsigned int dst;

	dst = ft_distance(start, end);
	arr = (int *)malloc(dst * sizeof(unsigned int));
	i = 0;
	if (end > start)
	{
		while (end >= start)
		{
			arr[i] = end;
			printf("%d", arr[i]);
			i++;
			end--;
		}
	}
	else if (end < start)
	{
		while (end <= start)
		{
			arr[i] = end;
			printf("%d", arr[i]);
			i++;
			end++;
		}
	}
	else
	{
		arr[0] = 0;
		printf("%d", arr[i]);
	}
	return (arr);
}

int		main(void)
{
	int *p;

	p = ft_rrange(-2147483647, 2147483647);

	printf("%d ", *p);
	free(p);
}
