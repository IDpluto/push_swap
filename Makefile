.PHONY: libft all clean fclean re

NAME = push_swap

SRCS =	srcs/stack.c \
		srcs/s.c \
		srcs/s2.c \
		srcs/main.c \
		srcs/radix_sort.c \
		srcs/q_sort.c \
		srcs/utils.c \
		srcs/check_arg.c

GCC_FLAG = -Wall -Werror -Wextra -g -fsanitize=address
CC = gcc $(GCC_FLAG)

OBJS = $(SRCS:.c=.o)


all: $(NAME)

libft:
	make -C libft/

$(%.o): $(%.c)
	$(CC) -o $@ -c $^

$(NAME): libft $(OBJS)
	$(CC) -o $@ $(OBJS) -Llibft -lft -I./



clean:
	rm -f srcs/*.o
	rm -f gnl/*.o
	make -C libft/ clean

fclean: clean
	make -C libft/ fclean

re: fclean all
