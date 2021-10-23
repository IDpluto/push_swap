.PHONY: libft all clean fclean re

NAME = push_swap

SRCS =	srcs/push_swap.c \
		srcs/check_arg.c \
		srcs/op_ps.c \
		srcs/op_r.c \
		srcs/radix_sort.c \
		srcs/q_sort.c \
		srcs/utils.c \
		srcs/stack.c \
		srcs/case_sort.c \
		srcs/solve.c

GCC_FLAG = -Wall -Werror -Wextra -g -fsanitize=address
CC = gcc $(GCC_FLAG)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

libft:
	make bonus -C libft/

$(%.o): $(%.c)
	$(CC) -o $@ -c $^

$(NAME): libft $(OBJS)
	$(CC) -o $@ $(OBJS) -Llibft -lft -I./

clean:
	rm -f srcs/*.o
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME)
	make -C libft/ fclean

re: fclean all
