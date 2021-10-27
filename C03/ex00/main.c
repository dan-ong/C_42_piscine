#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *a;
	char *b;

	a = "azdd";
	b = "";

	int out = ft_strcmp(a, b);
	printf("%d\n", out);
	return (0);
}
