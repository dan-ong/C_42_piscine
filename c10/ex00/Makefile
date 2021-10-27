NAME = ft_display_file
SRCS = ft_display_file.c
OBJS = ${SRCS:.c=.o}



all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $*.c -o $*.o

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
