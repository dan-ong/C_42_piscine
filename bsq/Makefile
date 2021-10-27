NAME = bsq
IDIR = ./includes/
SDIR = ./srcs/
ODIR = ./objs/
SRCS = $(addprefix $(SDIR), $(CFILES))
OBJS = $(addprefix $(ODIR), $(CFILES:.c=.o))
CFLAGS = -Wall -Wextra -Werror
CFILES =  main.c ft_filehandling.c ft_split.c ft_datacleanup.c ft_solveprocess.c ft_struct_gen.c ft_square_gen.c ft_print.c ft_put.c ft_validation.c ft_allgood.c

all: $(NAME)

$(ODIR)%.o: $(SDIR)%.c
	gcc $(CFLAGS) -c $(SDIR)$*.c -I$(IDIR) -o $(ODIR)$*.o

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean all fclean re
