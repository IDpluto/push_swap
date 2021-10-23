# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dohlee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 17:29:35 by dohlee            #+#    #+#              #
#    Updated: 2021/10/23 17:29:57 by dohlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

GCC_FLAG = -Wall -Werror -Wextra
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
