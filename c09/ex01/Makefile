NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
HDIR = ./includes/
SDIR = ./srcs/
SRCS = $(SDIR)ft_putchar.c $(SDIR)ft_putstr.c $(SDIR)ft_strcmp.c $(SDIR)ft_strlen.c $(SDIR)ft_swap.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $*.c -I$(HDIR) -o $*.o

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean re
