NAME = ft_cat
IDIR = ./includes/
SDIR = ./srcs/
ODIR = ./objs/
SRCS = $(addprefix $(SDIR), $(CFILES))
OBJS = $(addprefix $(ODIR), $(CFILES:.c=.o))
CFLAGS = -Wall -Wextra -Werror
CFILES =  ft_put.c ft_cat.c

all: $(NAME)

$(ODIR)%.o: $(SDIR)%.c
	gcc $(CFLAGS) -c $(SDIR)$*.c -I$(IDIR) -o $(ODIR)$*.o

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

.PHONY: clean all fclean
