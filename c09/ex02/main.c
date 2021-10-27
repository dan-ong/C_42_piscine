#include <stdio.h>

char	**ft_split(char *str, char *charset);
int	ft_isset(char c, char *charset);
int	ft_totalseps(char *str, char *charset);

int	main(void)
{
	char	**out;
	int		i;

	char	*str = "Hello, is' it, me( you're, looking! for!!)";
	char	charset[] = ",!";

	out = ft_split(str, charset);
	i = 0;
	while (out[i] != 0)
		i++;
	for (int j = 0; j < i; j++)
		printf("%s\n", out[j]);
	return (0);
}
