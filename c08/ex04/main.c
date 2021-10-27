#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char *av[3];
	t_stock_str	*test;

	av[0] = "The quick brown fox ";
	av[1] = "jumps over ";
	av[2] = "the lazy fox.";

	test = ft_strs_to_tab(0, av);
	ft_show_tab(test);
	return (0);
}
