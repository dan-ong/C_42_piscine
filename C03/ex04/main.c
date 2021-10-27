#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char haystack[] = "Thea toere hello there he is";
	char needle[] = "there";

	char *out;
	out = ft_strstr(haystack, needle);
	printf("%s\n", out);
	return (0);



}
