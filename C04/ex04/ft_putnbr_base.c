#include <unistd.h>

void	ft_putchar(char c);
int		ft_basecheck(char *base, int len);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	len;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '+' || base[len] == '-')
			return ;
		len++;
	}
	if (ft_basecheck(base, len) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= len)
		ft_putnbr_base(n / len, base);
	ft_putchar(base[n % len]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_basecheck(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (len <= 1)
		return (0);
	if (base[0] == '+' || base[0] == '-')
		return (0);
	while (i < len - 1)
	{
		while (j < len)
		{
			if (base[j] == '+' || base[j] == '-')
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}
