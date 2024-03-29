/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:30:47 by dohlee            #+#    #+#             */
/*   Updated: 2021/10/23 17:31:51 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef enum e_bool
{
	false,
	true
}	t_bool;

typedef struct s_node
{
	int				val;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
	char	name;
}	t_stack;

typedef struct s_ps
{
	int		*tmp;
	int		*arr;
	int		size;
	int		is_chk;
	t_stack	*a;
	t_stack	*b;
}	t_ps;

void	push_swap(t_ps *ps);
void	arr_qsort(int *arr, int l, int r);
void	radix_sort(t_ps *sv, int size);
int		my_atoi(t_ps *sv, const char *str);
void	error_argv(t_ps *sv, char **argv, int argc);
void	error_exit(t_ps *sv);
int		free_all(t_ps *sv);
t_bool	stack_empty(t_stack *st);
t_node	*new_node(t_ps *ps, int val);
void	append(t_ps *ps, t_stack *st, int val);
t_node	*pop(t_stack *stack);
void	push(t_stack *stack, t_node *node);
void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	sx(t_stack *x);
void	ss(t_ps *ps);
void	rx(t_stack *x);
void	rr(t_ps *ps);
void	rrx(t_stack *x);
void	rrr(t_ps *ps);
int		stack_top(t_stack *st);
void	check_dup(t_ps *ps);
void	least_case_sort(t_ps *ps);
void	five_case_sort(t_ps *ps);
t_bool	check_sorted(t_stack *st);
void	solve(t_ps *ps);
void	three_case_sort(t_ps *ps);
#endif
