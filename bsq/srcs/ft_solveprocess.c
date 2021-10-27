#include "bsq.h"

int	ft_solveprocess(char *filedata, int filesize)
{
	t_master	m;
	int			i;

	m.key = ft_getkeys(filedata);
	m.cols = ft_getcols(filedata);
	m.map = ft_clean(m, filedata, filesize);
	i = 0;
	while (m.map[i])
		i++;
	m.len = i;
	m.lmax = ft_struct_gen(m);
	ft_final_out_print(m);
	ft_print_map(m);
	return (0);
}
