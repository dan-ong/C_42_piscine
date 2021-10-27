#include "ft_cat.h"

#define BUF_SIZE 30720

int	main(int argc, char **argv)
{
	char	**files;
	int		filecount;

	if (argc == 1)
	{
		ft_stdinputecho();
		return (0);
	}
	else
	{
		files = &argv[1];
		filecount = argc - 1;
	}
	return (0);
}

int	ft_stdinputecho(void)
{
	int		readnum;
	int		i;
	char	buf[BUF_SIZE + 1];


	readnum = -1;
	i = 0;
	while (readnum != 0)
	{
		readnum = read(0, buf, BUF_SIZE);
		ft_putstr(buf);
		while (buf[i])
		{
			buf[i] = '\0';
			i++;
		}
		i = 0;
	}
	return (0);
}
