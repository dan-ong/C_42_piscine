#include <unistd.h>

void	ft_putstr(char *c);
void	ft_print_program_name(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}

void	ft_print_program_name(int argc, char **argv)
{
	ft_putstr(argv[argc / argc - 1]);
	return ;
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return ;
}
