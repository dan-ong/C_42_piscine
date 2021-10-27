int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) == 0)
			nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	optimus;

	if (nb % 2 == 0)
		return (0);
	else
	{
		optimus = nb / 2;
		while (optimus > 1)
		{
			if (nb % optimus == 0)
				return (0);
			optimus --;
		}
	}
	return (1);
}
