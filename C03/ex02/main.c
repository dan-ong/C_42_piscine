#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
//	char fillme[10] = "";
	char fillme2[10] = "";
	char first[] = "Henlo ";
	char second[] = "world";
	char third[] = " yep";
/*
	int b = 0;
	while (fillme[b] != '\0')
		b++;
	printf("%d\n", b);

	int asdf = 0;

	while (fillme2[asdf] != '\0')
		asdf++;

	printf("%d\n", asdf);
	printf("%s\n", fillme2);
	
	strcat(fillme2, first);
	printf("%s\n", fillme2);
	
	strcat(fillme2, second);
	printf("%s\n", fillme2);
	
	strcat(fillme2, third);
	printf("%s\n", fillme2);
*/
	int i = 0;
	while (fillme2[i] != '\0')
		i++;
	printf("%d\n", i);

	printf("%s\n", fillme2);
	ft_strcat(fillme2, first);
	printf("%s\n", fillme2);

	ft_strcat(fillme2, second);
	printf("%s\n", fillme2);

	ft_strcat(fillme2, third);
	printf("%s\n", fillme2);


	return (0);
}
