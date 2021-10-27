#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	int	out;

	str = "ASDFASDF";
	out = ft_str_is_printable(str);
	printf("%d\n", out);
	return (0);
}
