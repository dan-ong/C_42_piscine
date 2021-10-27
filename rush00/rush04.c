extern void	ft_putchar(char c);
extern void	ft_x(int x, char A, char B, char C);

void	rush(int x, int y)
{
	int	counterY;

	if (x > 0)
	{
		counterY = y;
		while (counterY > 0)
		{
			if (counterY == y)
			{
				ft_x(x, 'A', 'B', 'C');
				ft_putchar('\n');
			}
			else if (counterY == 1)
			{
				ft_x(x, 'C', 'B', 'A');
				ft_putchar('\n');
			}
			else
			{
				ft_x(x, 'B', ' ', 'B');
				ft_putchar('\n');
			}
			counterY--;
		}
	}
}

void	ft_x(int x, char A, char B, char C)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x)
		{
			ft_putchar(A);
		}
		else if (counter == 1)
		{
			ft_putchar(C);
		}
		else
		{
			ft_putchar(B);
		}
		counter--;
	}
}
