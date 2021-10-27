#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char actualdest[100] = "";
	char first[] = "Henlo how are you yes its ok ";
	char second[] = "\nworld";
	char third[] = " yep";

	int	actual1;
	int	actual2;
	int	actual3;

	actual1 = strlcat(actualdest, first, 100);
	actual2 = strlcat(actualdest, second, 100);
	actual3 = strlcat(actualdest, third, 100);

	printf("%d %d %d \n%s\n", actual1, actual2, actual3, actualdest);

	char testdest[100] = "";
	int test1;
	int test2;
	int test3;

	test1 = ft_strlcat(testdest, first, 100);
	test2 = ft_strlcat(testdest, second, 100);
	test3 = ft_strlcat(testdest, third, 100);

	printf("%d %d %d \n%s\n", test1, test2, test3, testdest);
	return (0);
}
