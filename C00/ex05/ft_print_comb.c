#include <unistd.h>

void	ft_print_comb(void);
void	ft_writenum(void);

char	g_c1 = '0';
char	g_c2 = '1';
char	g_c3 = '2';

void	ft_print_comb(void)
{
	if (g_c3 < '9')
	{
		ft_writenum();
		g_c3++;
		ft_print_comb();
	}
	else if (g_c2 < '8')
	{
		ft_writenum();
		g_c2++;
		g_c3 = g_c2 + 1;
		ft_print_comb();
	}
	else if (g_c1 < '7')
	{
		ft_writenum();
		g_c1++;
		g_c2 = g_c1 + 1;
		g_c3 = g_c2 + 1;
		ft_print_comb();
	}
	else
	{
		write(1, "789", 3);
	}
}

void	ft_writenum(void)
{
	write(1, &g_c1, 1);
	write(1, &g_c2, 1);
	write(1, &g_c3, 1);
	write(1, ", ", 2);
}
