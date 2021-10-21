#include "../push_swap.h"

void error_argv(t_ps *ps, char **argv, int argc)
{
	int	i;

	i = 1;
	if (argc == 2)
		i = 0;
	while (argv[i])
	{
		append(ps, ps->a, my_atoi(ps, argv[i]));
		if (argc == 2)
			free(argv[i]);
		i++;
	}
	if (argc == 2)
		free(argv);
}

int	my_atoi(t_ps *ps, const char *str)
{
	int			sign;
	long long	ans;

	ans = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	if ((*str == '-' || *str == '+') && *(str++) == '-')
		sign *= -1;
	if (ft_strlen(str) > 10 || ft_strlen(str) == 0)
		error_exit(ps);
	while ('0' <= *str && *str <= '9')
		ans = ans * 10 + *(str++) - '0';
	if (*str || (long long)(ans * sign) < (long long)INT_MIN
		|| (long long)INT_MAX < (long long)(ans * sign))
		error_exit(ps);
	return (ans * sign);
}

void	error_exit(t_ps *ps)
{
	ft_putstr_fd("Error\n", 1);
	free_all(ps);
	exit(1);
}

void	check_dup(t_ps *ps)
{
	int		i;
	t_node	*j;
	t_node	*k;

	i = -1;
	j = ps->a->head;
	while (++i < (int)ps->a->size)
	{
		k = j->next;
		while (j != k)
		{
			if (j->val == k->val)
				error_exit(ps);
			k = k->next;
		}
		j = j->next;
	}
}

t_bool	check_sorted(t_stack *st)
{
	t_node	*n;
	int		tmp;
	n = st->head;
	if (!n)
		return (true);
	tmp = n->val;
	n = n->next;
	while (n != st->head)
	{
		if (tmp > n->val)
			return (false);
		tmp = n->val;
		n = n->next;
	}
	return (true);
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

