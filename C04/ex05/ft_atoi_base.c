int	ft_basecheck(char *base);
int	ft_isinbase(char c, char *base);
int	ft_strlen(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negcount;
	int	len;
	int	outnum;

	i = 0;
	negcount = 0;
	outnum = 0;
	len = ft_strlen(base);
	if (ft_basecheck(base) == 0)
		return (0);
	while (str[i] < 33 || str[i] > 126 || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negcount++;
		i++;
	}
	while (ft_isinbase(str[i], base) != -1)
	{
		outnum = outnum * len + ft_isinbase(str[i], base);
		i++;
	}
	if (negcount % 2 == 1)
		outnum = -outnum;
	return (outnum);
}

int	ft_basecheck(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 1;
	len = ft_strlen(base);
	if (len <= 1 || base[0] == '+' || base[0] == '-'
		|| base[0] < 33 || base[0] > 126)
		return (0);
	while (i < len - 1)
	{
		while (j < len)
		{
			if (base[j] == '+' || base[j] == '-'
				|| base[j] < 33 || base[j] > 126)
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

int	ft_isinbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
