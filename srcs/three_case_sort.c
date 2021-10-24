#include "../push_swap.h"

static void	top_min_a(t_ps *ps, int max)
{
	if (ps->a->head->next->val == max)
	{
		rrx(ps->a);
		sx(ps->a);
	}
}

static void	middle_min_a(t_ps *ps, int max)
{
	if (ps->a->head->next->next->val == max)
		sx(ps->a);
	else
		rx(ps->a);
}

static void	bottom_min_a(t_ps *ps, int max)
{
	if (ps->a->head->val == max)
		sx(ps->a);
	rrx(ps->a);
}

void	three_case_sort(t_ps *ps)
{
	int	min;
	int	max;

	min = ps->arr[2];
	max = ps->arr[4];
	if (ps->a->head->val == min)
		top_min_a(ps, max);
	else if (ps->a->head->next->val == min)
		middle_min_a(ps, max);
	else if (ps->a->head->next->next->val == min)
		bottom_min_a(ps, max);
}
