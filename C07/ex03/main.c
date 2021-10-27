#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *str[3];
	str[0] = "yeah";
	str[1] = "nah";
	str[2] = "mate";
	char *out;

	
	out = ft_strjoin(3, str, "");
	printf("%s\n", out);
	free(out);
	return (0);
}
