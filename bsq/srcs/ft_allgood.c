#include "bsq.h"

int	ft_allgood(char *filedata)
{
	char	*keys;

	if (ft_check_head(filedata) == 0
		|| ft_check_newlines(filedata) == 0)
	{
		ft_putstr("Make a better header nerd... map error\n");
		return (0);
	}
	keys = ft_getkeys(filedata);
	if (ft_check_keys(filedata, keys) == 0)
	{
		ft_putstr("RTFQ... map error\n");
		return (0);
	}
	if (ft_check_equallines(filedata) == 0)
	{
		ft_putstr("God... check line lengths... map error\n");
		return (0);
	}
	if (ft_check_emptychar(filedata) == 0)
	{
		ft_putstr("How do you expect me to solve that??? ... map error\n");
		return (0);
	}
	return (1);
}

int	ft_check_equallines(char *filedata)
{
	int	i;
	int	check;
	int	firstlen;

	if (ft_count_newlines(filedata) <= 2)
		return (1);
	i = 0;
	check = 0;
	firstlen = ft_line_length(filedata);
	while (filedata[i] != 10 && filedata[i])
		i++;
	i++;
	while (filedata[i])
	{
		while (check < firstlen && filedata[i] != 10)
		{
			check++;
			i++;
		}
		if (check != firstlen)
			return (0);
		check = 0;
		i++;
	}
	return (1);
}

int	ft_line_length(char *filedata)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (filedata[i] != 10)
		i++;
	i++;
	while (filedata[i] != 10)
	{
		k++;
		i++;
	}
	return (k);
}

int	ft_check_emptychar(char *filedata)
{
	char	*keys;
	int		i;
	int		flipper;

	i = 0;
	flipper = 0;
	keys = ft_getkeys(filedata);
	while (filedata[i] && filedata[i] != 10)
		i++;
	while (filedata[i])
	{
		if (filedata[i] == keys[0])
			flipper = 1;
		i++;
	}
	return (flipper);
}

int	ft_count_newlines(char *filedata)
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
	return (nl);
}
