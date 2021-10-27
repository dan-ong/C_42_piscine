#include <unistd.h>

void	ft_lastdig(char *c, int n);
void	ft_writenum(char *c, int n);
void	ft_otherdig(char *c, int n);

void	ft_print_combn(int n)
{
	char	c[10];
	int		i;

	i = 0;
	while (i <= 9)
	{
		c[i] = i + '0';
		i++;
	}
	ft_lastdig(c, n);
}

void	ft_lastdig(char *c, int n)
{
	int	i;

	i = n - 1;
	if (n > 10 || n < 0)
	{
		return ;
	}
	else if (c[i] < '9' && n > 0)
	{
		ft_writenum(c, n);
		write(1, ", ", 2);
		c[i] = c[i] + 1;
		ft_lastdig(c, n);
	}
	else if (c[i] - c[0] > n - 1 && c[i] < 58)
	{
		ft_writenum(c, n);
		write(1, ", ", 2);
		ft_otherdig(c, n);
	}
	else
	{
		ft_writenum(c, n);
	}
}

void	ft_otherdig(char *c, int n)
{
	int	i;
	int	j;

	i = n - 1;
	j = 0;
	while (c[i - j - 1] + 1 == c[i - j] && i - j > 0)
	{
		j++;
	}
	c[i - j - 1] = c[i - j - 1] + 1;
	while (j >= 0)
	{
		c[i - j] = c[i - j - 1] + 1;
		j--;
	}
	ft_lastdig(c, n);
}

void	ft_writenum(char *c, int n)
{
	write(1, c, n);
}
