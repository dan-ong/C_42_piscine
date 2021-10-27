#include <stdio.h>

int	ft_str_is_numeric();

int	main(void)
{
	char *str;

	str = "12  3";
	printf("%d\n",ft_str_is_numeric(str));
	return (0);
}
