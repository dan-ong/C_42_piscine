#include <unistd.h>

int	ft_chec(int nb, int index);
int	ft_len(int nb);

void	ft_putnbr(int nb)
{
	char	c[11];
	int		count;
	int		i;
	int		len;
	int		neg;

	i = 0;
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		c[0] = 45;
	}
	len = ft_len(nb);
	count = ft_len(nb);
	while (len > i)
	{
		c[i + neg] = ft_chec(nb, count);
		i++;
		count--;
	}
	write(1, &c, len + neg);
}

int	ft_len(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		i = 1;
	}
	else
	{
		while (nb != 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	return (i);
}

int	ft_chec(int nb, int index)
{
	int	i;
	int	out;
	int	neg;

	neg = 1;
	if (nb < 0)
	{
		neg = -1;
	}
	i = 0;
	while (i < index - 1)
	{
		nb = nb / 10;
		i++;
	}
	out = (nb % 10 * neg) + 48;
	return (out);
}
