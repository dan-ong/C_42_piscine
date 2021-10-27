int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	out;

	i = 1;
	out = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		out = nb * out;
		i++;
	}
	return (out);
}
