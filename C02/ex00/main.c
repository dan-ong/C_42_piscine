#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[6];

	char str[5] = "test";

	ft_strcpy(dest, str);

	printf("%s\n", str);
	printf("%s\n", dest);
	return (0);
}
