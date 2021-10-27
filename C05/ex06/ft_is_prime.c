int	ft_is_prime(int nb)
{
	int	optimus;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	else
	{
		optimus = nb / 2;
		while (optimus > 1)
		{
			if (nb % optimus == 0)
				return (0);
			optimus--;
		}
	}
	return (1);
}
