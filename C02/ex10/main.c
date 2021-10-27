#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	test[] = "";
	char	test2[2];

	unsigned int	testout;

	testout = ft_strlcpy(test2, test, 0);
	printf("%s\n", test2);
	printf("%d\n", testout);

	char	arr[] = "";
	char	arr2[2];

	unsigned int	out;

	out = strlcpy(arr2, arr, 0);
	printf("%s\n", arr2);
	printf("%d\n", out);
	return (0);
}
