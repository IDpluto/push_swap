#include "push_swap.h"

int			main(int argc, char *argv[])
{
	t_deque q;
	t_deque q2;

	dq_init(&q);
	dq_init(&q2);
	int i;
	int element;
	element = argc;
	i = 1;
	while (i < element)
	{
		dq_add_first(&q, ft_atoi(argv[i]));
		i++;
	}
	i = 1;
	while (i < element)
	{
		dq_add_first(&q2, ft_atoi(argv[i]));
		i++;
	}
	while (!dq_empty(&q))
		printf("%d\n", dq_remove_first(&q));
	while (!dq_empty(&q2))
		printf("%d\n", dq_remove_first(&q2));

}
