#include <unistd.h>

void	ft_verify(char *str);
void	ft_putstr(char *str);

int	main(int argc, char*argv[])
{
	char	*clues;

	if (argc != 2)
		return (0);
	clues = argv[1];
	ft_verify(clues);
	return (0);
}
