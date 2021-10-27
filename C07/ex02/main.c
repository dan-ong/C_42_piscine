#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	**arr;
	int	min = 5;
	int	max = 10;
	

	int out = ft_ultimate_range(arr, min, max);

	printf("%d\n", out);
	
	for (int i = 0; i < (max - min); i++)
		printf("%d\n", arr[0][i]);
	printf("%p\n", arr);
	free(*arr);
	return (0);
}
