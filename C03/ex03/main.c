#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char fillme2[100];
	char first[] = "Henlo ";
	char second[] = "world";
	char third[] = " yep";

	int i = 0;
	while (fillme2[i] != '\0')
		i++;
	printf("%d\n", i);

	printf("%s\n", fillme2);
	ft_strncat(fillme2, first, 10);
	printf("%s\n", fillme2);

	ft_strncat(fillme2, second, 10);
	printf("%s\n", fillme2);

	ft_strncat(fillme2, third, 2);
	printf("%s\n", fillme2);


	return (0);
}
