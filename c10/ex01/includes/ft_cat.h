#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>

//ft_put.c
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

//ft_main.c
int		ft_stdinputecho(void);

#endif
