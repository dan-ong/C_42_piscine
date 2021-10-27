#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int	out;

	str = "testotest";
	out = ft_str_is_lowercase(str);
	printf("%d\n", out);
	return (0);
}
