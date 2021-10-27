#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;

	size = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(4 * (max - min));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	while (min < max)
	{
		arr[size] = min;
		size++;
		min++;
	}
	return (size);
}
