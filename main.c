#include "push_swap.h"

int			main(int argc, char *argv[])
{
	t_deque *a;
	t_deque *b;
	t_solve *solve;

	//dq_init(a);
	//dq_init(b);
	int i;
	int element;
	element = argc;

	a = (t_deque *)ft_calloc(1, sizeof(t_deque));
	b = (t_deque *)ft_calloc(1, sizeof(t_deque));
	solve = (t_solve *)ft_calloc(1, sizeof(t_solve));
	a->name = 'a';
	b->name = 'b';
	solve->a = a;
	solve->b = b;
	if (argc < 2)
		return (0);

	i = 1;
	while (i < element)
	{
		append(a, ft_atoi(argv[i]));
		//append(b, ft_atoi(argv[i]));
		i++;
		a->size++;
	}
	solve->size = a->size;
	b->size = a->size;
	printf("size == %d\n", (int)solve->size);
	push_swap(solve);
	//pa(solve);
	//rq(b);
	//pb(solve);
	//pb(solve);
	//ss(solve);
	//rq(a);
	//rrr(solve);
	//rrq(a);
	i = -1;

	while (++i < (int)solve->size)
		printf("arr->%d\n", solve->arr[i]);
	while (!dq_empty(a))
		printf("a->>%d\n", dq_remove_first(solve->a));
	while (!dq_empty(b))
		printf("b->>%d\n", dq_remove_first(solve->b));
}

void	push_swap(t_solve *solve)
{
	int		i;
	t_node	*n;

	solve->arr = (int *)malloc(sizeof(int) * solve->a->size);
	solve->tmp = (int *)malloc(sizeof(int) * solve->a->size);
	n = solve->a->head;
	i = -1;
	while (++i < solve->a->size)
	{
		solve->tmp[i] = n->data;
		solve->arr[i] = n->data;
		n = n->next;
	}
	heap_sort(solve->arr, solve->a->size);

}
