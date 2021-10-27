#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	int	out;

	str = "ASDaaasdfFASDF";
	out = ft_str_is_uppercase(str);
	printf("%d\n", out);
	return (0);
}
