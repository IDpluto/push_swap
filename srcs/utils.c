#include "../push_swap.h"

void simplified_num(t_ps *ps, int size)
{
	int i;
	int j;
	t_node *n;

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

void	least_case_sort(t_ps *ps)
{
	if (ps->a->size == 2
		|| !(((ps->tmp[0] == ps->arr[2]) && (ps->tmp[1] == ps->arr[0]))
			|| ((ps->tmp[1] == ps->arr[2]) && (ps->tmp[2] == ps->arr[0]))))
		sx(ps->a);
	if (ps->a->size == 2)
		return ;
	ps->tmp[0] = ps->a->head->val;
	ps->tmp[1] = ps->a->head->next->val;
	ps->tmp[2] = ps->a->head->next->next->val;
	if (ps->a->size != 2
		&& ((ps->tmp[0] == ps->arr[2]) && (ps->tmp[1] == ps->arr[0])))
		rx(ps->a);
	else if (ps->a->size != 2
		&& ((ps->tmp[1] == ps->arr[2]) && (ps->tmp[2] == ps->arr[0])))
		rrx(ps->a);
}
