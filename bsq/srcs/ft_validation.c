#include "bsq.h"

int	ft_check_head(char *filedata)
{
	int	i;

	i = 0;
	while (filedata[i] != 10 && filedata[i + 1])
		i++;
	if (i < 4)
		return (0);
	i--;
	if (filedata[i] == filedata[i - 1])
		return (0);
	else if (filedata[i] == filedata[i - 2])
		return (0);
	else if (filedata[i - 1] == filedata[i - 2])
		return (0);
	i -= 3;
	while (filedata[i] && i > 0)
	{
		if (!(filedata[i] >= '0' && filedata[i] <= '9'))
			return (0);
		i--;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	outnum;
	int	hlen;

	outnum = 0;
	i = 0;
	hlen = 0;
	while (str[hlen] && str[hlen] != 10)
		hlen++;
	while ((str[i] && i < hlen - 3) && (str[i] >= '0' && str[i] <= '9'))
	{
		outnum = outnum * 10 + str[i] - '0';
		i++;
	}
	return (outnum);
}

int	ft_check_keys(char *filedata, char *keys)
{
	int	i;

	i = 0;
	while (filedata[i] != 10)
		i++;
	i++;
	while (filedata[i])
	{
		if (filedata[i] == keys[0] || filedata[i] == keys[1])
			i++;
		else if (filedata[i] == 10)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_check_newlines(char *filedata)
{
	int	i;
	int	nl;

	i = 0;
	nl = 0;
	while (filedata[i])
	{
		if (filedata[i] == 10)
			nl++;
		i++;
	}
	if (nl != (ft_atoi(filedata) + 1))
		return (0);
	return (1);
}
