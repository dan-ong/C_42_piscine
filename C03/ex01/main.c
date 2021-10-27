#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *a;
	char *b;

	a = "addd";
	b = "adda";

	int out = ft_strncmp(a, b, 444);
	printf("%d\n", out);
	return (0);
}
