#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#define ERROR -1
#define MAX_DEQUE_SIZE 5

typedef enum e_bool
{
	false,
	true
}	t_bool;

typedef struct s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_deque
{
	t_node	*head;
	t_node *tail;
	size_t size;
	char	name;
}	t_deque;

typedef struct s_solve
{
	int		*tmp;
	int		*arr;
	int		size;
	t_deque *a;
	t_deque *b;
} t_solve;

void dq_init(t_deque *q);
t_bool dq_empty(t_deque *q);
void dq_add_first(t_deque *q, int data);
void dq_add_last(t_deque *q, int data);
int dq_remove_first(t_deque *q);
int dq_remove_last(t_deque *q);
int dq_get_first(t_deque *q);
int dq_get_last(t_deque *q);
void swap(int *arr, int i, int j);
void heapify(int *arr, int size, int i);
void heap_sort(int *arr, int size);
void	pa(t_solve *sv);
void	push_swap(t_solve *solve);
void	sq(t_deque *q);
void	ss(t_solve *sv);
void	rq(t_deque *q);
void	rr(t_solve *sv);
#endif
