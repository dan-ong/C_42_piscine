#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "OK 2 yep";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
