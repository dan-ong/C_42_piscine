#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_show_tab(struct s_stock_str *par)
{
	int	p;

	p = 0;
	while (par[p].str != 0)
	{
		ft_putstr(par[p].str);
		ft_putstr("\n");
		ft_putnbr(par[p].size);
		ft_putstr("\n");
		ft_putstr(par[p].copy);
		ft_putstr("\n");
		p++;
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
