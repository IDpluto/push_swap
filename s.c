#include "push_swap.h"

void	pa(t_solve *sv)
{
	dq_add_first(sv->a,dq_get_first(sv->b));
	dq_remove_first(sv->b);
	ft_putstr_fd("pa", 2);
	ft_putchar_fd('\n', 1);
}
void	pb(t_solve *sv)
{
	dq_add_first(sv->b,dq_get_first(sv->a));
	dq_remove_first(sv->a);
	ft_putstr_fd("pb", 2);
	ft_putchar_fd('\n', 1);
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
	ft_putstr_fd("s", 1);
	ft_putchar_fd(q->name, 1);
	ft_putchar_fd('\n', 1);
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
	ft_putstr_fd("ss", 2);
	ft_putchar_fd('\n', 1);
}

void	rq(t_deque *q)
{
	int first;

	first = dq_get_first(q);
	dq_remove_first(q);
	dq_add_last(q,first);
	ft_putstr_fd("r", 1);
	ft_putchar_fd(q->name, 1);
	ft_putchar_fd('\n', 1);
}

void	rr(t_solve *sv)
{
	int first;

	first = dq_get_first(sv->a);
	dq_remove_first(sv->a);
	dq_add_last(sv->a,first);
	first = dq_get_first(sv->b);
	dq_remove_first(sv->b);
	dq_add_last(sv->b,first);
	ft_putstr_fd("rr", 2);
	ft_putchar_fd('\n', 1);
}

void	rrq(t_deque *q)
{
	int last;

	last = dq_get_last(q);
	dq_remove_last(q);
	dq_add_first(q,last);
	ft_putstr_fd("rr", 2);
	ft_putchar_fd(q->name, 1);
	ft_putchar_fd('\n', 1);
}

void	rrr(t_solve *sv)
{
	int last;

	if (sv->a->size >= 2)
	{
		last = dq_get_last(sv->a);
		dq_remove_last(sv->a);
		dq_add_first(sv->a,last);
	}
	if (sv->b->size >= 2)
	{
		last = dq_get_last(sv->b);
		dq_remove_last(sv->b);
		dq_add_first(sv->b,last);
	}
	ft_putstr_fd("rrr", 3);
	ft_putchar_fd('\n', 1);
}

