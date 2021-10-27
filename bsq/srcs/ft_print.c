#include "bsq.h"

void	ft_print_map(t_master m)
{
	int	pos;

	pos = 0;
	while (pos < m.len)
	{
		if (pos == 0 || pos % m.cols != 0)
		{
			ft_putchar(m.map[pos]);
			pos++;
		}
		else
		{
			ft_putchar('\n');
			ft_putchar(m.map[pos]);
			pos++;
		}
	}
	ft_putchar('\n');
}

void	ft_print_state(t_master m)
{
	int	pos;

	pos = 0;
	while (pos < m.len)
	{
		if (pos == 0 || pos % m.cols != 0)
		{
			ft_putnbr(m.lmax[pos].state);
			pos++;
		}
		else
		{
			ft_putchar('\n');
			ft_putnbr(m.lmax[pos].state);
			pos++;
		}
	}
	ft_putchar('\n');
}

void	ft_print_max(t_master m)
{
	int	pos;

	pos = 0;
	while (pos < m.len)
	{
		if (pos == 0 || pos % m.cols != 0)
		{
			ft_putnbr(m.lmax[pos].max);
			pos++;
		}
		else
		{
			ft_putchar('\n');
			ft_putnbr(m.lmax[pos].max);
			pos++;
		}
	}
	ft_putchar('\n');
}

void	ft_printfilename(char *filename)
{
	ft_putstr(filename);
	ft_putstr(" output:\n");
}
