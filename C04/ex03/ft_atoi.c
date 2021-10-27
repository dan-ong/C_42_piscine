int	ft_atoi(char *str)
{
	int	i;
	int	negcount;
	int	outnum;

	outnum = 0;
	i = 0;
	negcount = 0;
	while (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		if (str[i] == '-')
			negcount++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		outnum = outnum * 10 + str[i] - '0';
		i++;
	}
	if (negcount % 2 == 1)
		outnum = -outnum;
	return (outnum);
}
