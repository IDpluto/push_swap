#include "../push_swap.h"

void	radix_sort(t_ps *ps, int size)
{
	int	max_num;
	int	max_bits;
	int	num;
	int	i;
	int	j;

	max_num = size;
	max_bits = 0;
	while (max_num >> max_bits != 0)
		++max_bits;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			num = stack_top(ps->a);
			if (((num >> i) & 0x01) == 1)
				rx(ps->a);
			else
				pb(ps);
		}
		while (!stack_empty(ps->b))
			pa(ps);
	}
}
