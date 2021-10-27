#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div;
	int mod;

	ft_div_mod(10, 4, &div, &mod);
	printf("%d, %d", div, mod);
	return (0);
}
