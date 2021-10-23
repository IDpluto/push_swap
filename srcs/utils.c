#include "../push_swap.h"

int	stack_top(t_stack *st)
{
	return (st->head->val);
}

void	re_arr_malloc(t_ps *ps)
{
	int		i;
	t_node	*n;

	n = ps->a->head;
	ps->arr = (int *)malloc(sizeof(int) * ps->a->size);
	if (!ps->arr)
		error_exit(ps);
	i = -1;
	while (++i < (int)ps->a->size)
	{
		ps->arr[i] = n ->val;
		n = n->next;
	}
}

void	error_exit(t_ps *ps)
{
	ft_putstr_fd("Error\n", 1);
	free_all(ps);
	exit(1);
}

int	free_all(t_ps *ps)
{
	while (ps->a->head)
		free(pop(ps->a));
	free(ps->a);
	while (ps->b->head)
		free(pop(ps->b));
	free(ps->b);
	if (ps->arr)
		free(ps->arr);
	if (ps->tmp)
		free(ps->tmp);
	free(ps);
	return (0);
}
