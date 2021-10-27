#include <stdio.h>

void	*ft_range(int min, int max);

int	main(void)
{
	int min = 2;
	int max = 10;
	
	int *arr = ft_range(min, max);
	
	for (int i = 0; i < (max - min); i++)
		printf("%d ", arr[i]);
	return (0);
}
