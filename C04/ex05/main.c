#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char str[] = "  --++asdf5zzzzz22r-/";
	int a;

	a = ft_atoi_base(str,"0asdf56789");
	printf("%d\n", a);
	return (0);
}
