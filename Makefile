NAME = push_swap
LIBFT = ./libft/libft.a
FLAGS = -Wall -Wextra -Werror -g3

SRCS = ./src/main.c\
	./src/move.c\
	./src/move2.c\
	./src/orden.c\
	./src/push_swap.c\
	./src/utils.c\
	./src/radix.c\
	./src/check_all.c

OBJS	= $(SRCS:%.c=%.o)

all: libft $(NAME)

libft:
	make -C ./libft

%.o:%.c
	cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT) 
	cc $(OBJS) $(LIBFT) -o $(NAME)

clean:
	rm -rf $(OBJS)
	make clean -C ./libft

fclean:	clean
	rm	-rf $(NAME)
	make fclean -C ./libft

re:	fclean all clean

.PHONY:	all clean fclean re libft