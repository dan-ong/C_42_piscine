#include <unistd.h>

void	ft_putstr(char *str);
void	ft_getclues(char *clues);

void	ft_verify(char *str)
{
	char	*a;
	int		i;

	i = 0;
	a = "error";
	while (str[i] != '\0')
	{
		if ((i % 2 == 0) && !(str[i] > 48 && str[i] <= 52))
		{
			ft_putstr(a);
			return ;
		}
		else if ((i % 2 == 1) && !(str[i] == 32))
		{
			ft_putstr(a);
			return ;
		}
		++i;
	}
	if (i != 31)
	{
		ft_putstr(a);
		return ;
	}
	ft_getclues(str);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}
