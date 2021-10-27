#include <unistd.h>

void	ft_putstr(char *str);
void	ft_rev_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}

void	ft_rev_params(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		ft_putstr("\n");
		argc--;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
