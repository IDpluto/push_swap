#include "../push_swap.h"

void	three_case_sort(t_ps *ps)
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

void	two_case_sort(t_ps *ps)
{
	if (ps->b->head->val < ps->b->head->next->val)
		sx(ps->b);
	pa(ps);
	pa(ps);
}

void	five_case_sort(t_ps *ps)
{
	int	pb_chk;
	int	mid;

	pb_chk = 0;
	mid = ps->arr[2];
	while (1)
	{
		if (ps->a->head->val < mid)
		{
			pb(ps);
			pb_chk++;
		}
		else
			rx(ps->a);
		if (pb_chk == 2)
			break ;
	}
	free(ps->arr);
	re_arr_malloc(ps);
	arr_qsort(ps->arr, 0, ps->a->size - 1);
	three_case_sort(ps);
	two_case_sort(ps);
}
