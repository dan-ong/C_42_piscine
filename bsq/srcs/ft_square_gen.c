#include "bsq.h"

int	ft_find_first_max(t_master m)
{
	int	i;
	int	tmp;
	int	pos;

	tmp = m.lmax[0].max;
	i = 0;
	pos = 0;
	while (i < m.len)
	{
		if (m.lmax[i].max > tmp)
		{
			tmp = m.lmax[i].max;
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	ft_final_out_print(t_master m)
{
	int	pos;
	int	max;
	int	i;
	int	j;

	pos = ft_find_first_max(m);
	max = m.lmax[pos].max;
	i = max;
	j = max;
	while (j > 0)
	{
		while (i > 0)
		{
			m.map[pos] = m.key[2];
			pos--;
			i--;
		}
		j--;
		i = max;
		pos = pos - m.cols + max;
	}
}
