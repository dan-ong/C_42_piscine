#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr(char *str);
int		ft_argcheck(int argc);

int	main(int argc, char **argv)
{
	int		filenum;
	int		readnum;
	char	buf[BUF_SIZE + 1];

	if (ft_argcheck(argc) == 0)
		return (0);
	filenum = open(argv[1], O_RDONLY);
	if (filenum == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	readnum = read(filenum, buf, BUF_SIZE);
	buf[readnum] = '\0';
	ft_putstr(buf);
	return (0);
}

int	ft_argcheck(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
