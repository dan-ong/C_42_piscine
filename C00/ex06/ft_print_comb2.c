#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	ln;
	int	rn;

	ln = 0;
	rn = 0;
	while (ln <= 98)
	{
		rn = ln + 1;
		while (rn <= 99)
		{
			ft_putchar(ln / 10 + '0');
			ft_putchar(ln % 10 + '0');
			write(1, " ", 1);
			ft_putchar(rn / 10 + '0');
			ft_putchar(rn % 10 + '0');
			if (ln != 98)
			{
				write(1, ", ", 2);
			}
			rn++;
		}
		ln++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
