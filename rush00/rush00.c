extern void	ft_putchar(char c);
extern void	ft_x(int x, char A, char B);

void	rush(int x, int y)
{
	int	counterY;

	if (x > 0)
	{
		counterY = y;
		while (counterY > 0)
		{
			if (counterY == y || counterY == 1)
			{
				ft_x(x, 'o', '-');
				ft_putchar('\n');
			}
			else
			{
				ft_x(x, '|', ' ');
				ft_putchar('\n');
			}
			counterY--;
		}
	}
}

void	ft_x(int x, char A, char B)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x || counter == 1)
		{
			ft_putchar(A);
		}
		else
		{
			ft_putchar(B);
		}
		counter--;
	}
}
