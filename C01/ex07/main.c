#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[2] = {1, 2};
	
	ft_rev_int_tab(tab, 2);

	for (int i = 0; i< 2; i++) {printf("%d ", tab[i]);}

	return (0);
}
