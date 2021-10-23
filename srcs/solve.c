#include "../push_swap.h"

void	solve(t_ps *ps)
{
	arr_qsort(ps->arr, 0, ps->size - 1);
	if (ps->size <= 3)
		three_case_sort(ps);
	else if (ps->size <= 5)
		five_case_sort(ps);
	else
	{
		simplified_num(ps, ps->size);
		radix_sort(ps, ps->size);
	}
}

void	simplified_num(t_ps *ps, int size)
{
	int		i;
	int		j;
	t_node	*n;

	n = ps->a->head;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (ps->tmp[i] == ps->arr[j])
			{
				n->val = j;
				n = n->next;
				break ;
			}
		}
	}
}
