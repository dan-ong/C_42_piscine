#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[10] = {4, 2, 1, 9, 8, 6, 1, 6, 8, 7};

	ft_sort_int_tab(tab, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}

}
