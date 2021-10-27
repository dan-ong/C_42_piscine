#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "OK 2 yep";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
