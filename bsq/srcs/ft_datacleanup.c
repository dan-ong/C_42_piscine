#include "bsq.h"

char	*ft_getkeys(char *filedata)
{
	int		getchars;
	char	*getkey;

	getkey = malloc(sizeof(char) * 3);
	if (getkey == NULL)
	{
		ft_putstr("malloc error");
		return (0);
	}
	getchars = 0;
	while (filedata[getchars] != 10)
		getchars++;
	getkey[2] = filedata[getchars - 1];
	getkey[1] = filedata[getchars - 2];
	getkey[0] = filedata[getchars - 3];
	return (getkey);
}

char	*ft_clean(t_master m, char *filedata, int readnum)
{
	char	*output;
	int		i;
	int		j;

	output = malloc(sizeof(char) * readnum);
	if (output == NULL)
		return (0);
	i = 0;
	j = 0;
	while (filedata[i] != 10)
		i++;
	while (filedata[i])
	{
		if (ft_iskey(filedata[i], m.key))
		{
			output[j] = filedata[i];
			j++;
		}
		i++;
	}
	output[j] = '\0';
	return (output);
}

int	ft_iskey(char c, char *key)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (key[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_getcols(char *filedata)
{
	int	i;
	int	cols;

	i = 0;
	cols = 0;
	while (filedata[i] != 10)
		i++;
	i++;
	while (filedata[i] != 10)
	{
		i++;
		cols++;
	}
	return (cols);
}
