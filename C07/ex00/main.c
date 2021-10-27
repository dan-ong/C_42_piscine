#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	orig[] = "asdf";
	char	*copy;

	copy = ft_strdup(orig);

	printf("%s\n", copy);
	
	char	empty[] = "asdf";
	char	*copy2;

	copy2 = ft_strdup(empty);
	printf("%s\n", copy2);

	return (0);
}
