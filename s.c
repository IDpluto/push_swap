#include "push_swap.h"

void	pa(t_solve *sv)
{
	dq_add_first(sv->a,dq_get_first(sv->b));
	dq_remove_first(sv->b);
}
void	pb(t_solve *sv)
{
	dq_add_first(sv->b,dq_get_first(sv->a));
	dq_remove_first(sv->a);
}

void	sq(t_deque *q)
{
	int q1;
	int q2;

	q1 = dq_get_first(q);
	dq_remove_first(q);
	q2 = dq_get_first(q);
	dq_remove_first(q);
	dq_add_first(q, q1);
	dq_add_first(q, q2);
}

void	ss(t_solve *sv)
{
	int a1;
	int a2;
	int b1;
	int b2;

	if (sv->a->size >= 2)
	{
		a1 = dq_get_first(sv->a);
		dq_remove_first(sv->a);
		a2 = dq_get_first(sv->a);
		dq_remove_first(sv->a);
		dq_add_first(sv->a, a1);
		dq_add_first(sv->a, a2);
	}
	if (sv->b->size >= 2)
	{
		b1 = dq_get_first(sv->b);
		dq_remove_first(sv->b);
		b2 = dq_get_first(sv->b);
		dq_remove_first(sv->b);
		dq_add_first(sv->b, b1);
		dq_add_first(sv->b, b2);
	}
}

void	rq(t_deque *q)
{
	int first;
	int last;

	first = dq_get_first(q);
	dq_remove_first(q);
	last = dq_get_last(q);
	dq_remove_last(q);
	dq_add_first(q,last);
	dq_add_last(q,first);
}

void	rr(t_solve *sv)
{
	int first;
	int last;

	first = dq_get_first(sv->a);
	dq_remove_first(sv->a);
	last = dq_get_last(sv->a);
	dq_remove_last(sv->a);
	dq_add_first(sv->a,last);
	dq_add_last(sv->a,first);
	first = dq_get_first(sv->b);
	dq_remove_first(sv->b);
	last = dq_get_last(sv->b);
	dq_remove_last(sv->b);
	dq_add_first(sv->b,last);
	dq_add_last(sv->b,first);
}
