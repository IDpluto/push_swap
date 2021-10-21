#include "../push_swap.h"

int			main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	t_ps *ps;
	char **argv_tmp;
	if (argc < 2)
		return (0);
	a = (t_stack *)ft_calloc(1, sizeof(t_stack));
	b = (t_stack *)ft_calloc(1, sizeof(t_stack));
	ps = (t_ps *)ft_calloc(1, sizeof(t_ps));
	a->name = 'a';
	b->name = 'b';
	ps->a = a;
	ps->b = b;
	if (argc == 2)
	{
		argv_tmp = ft_split(argv[1], ' ');
		error_argv(ps, argv_tmp, argc);
	}
	else if (argc > 2)
		error_argv(ps, argv, argc);
	check_dup(ps);
	ps->size = a->size;
	push_swap(ps);
	free_all(ps);
}

void push_swap(t_ps *ps)
{
	int i;
	t_node *n;

	if (check_sorted(ps->a))
		return ;
	ps->arr = (int *)malloc(sizeof(int) * ps->a->size);
	ps->tmp = (int *)malloc(sizeof(int) * ps->a->size);
	if (!ps->arr || !ps->tmp)
		error_exit(ps);
	n = ps->a->head;
	i = -1;
	while (++i < (int)ps->a->size)
	{
		ps->tmp[i] = n->val;
		ps->arr[i] = n ->val;
		n = n->next;
	}
	arr_qsort(ps->arr, 0, ps->size - 1);
	if (ps->size <= 3)
		least_case_sort(ps);
	else
	{
		simplified_num(ps, ps->size);
		radix_sort(ps, ps->size);
	}
	i = -1;
	/*while(++i < (int)ps->size)
	{
		printf(":%d\n", n->val);
		n = n->next;
	}*/
}

