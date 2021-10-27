#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int	out;

	str = "testoASDFA   SDFtest";
	out = ft_str_is_alpha(str);
	printf("%d\n", out);
	return (0);
}
