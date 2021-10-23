/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:23:37 by dohlee            #+#    #+#             */
/*   Updated: 2021/09/21 18:23:38 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(long long n)
{
	if (n < 10)
		return (1);
	return (get_len(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	char			*ret;
	int				len;
	long long		tmp;

	len = 0;
	tmp = n;
	if (n < 0)
	{
		len++;
		tmp = -tmp;
	}
	len += get_len(tmp);
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ret[len] = 0;
	ret[--len] = tmp % 10 + '0';
	tmp /= 10;
	while (tmp)
		ret[--len] = tmp % 10 + '0';
	if (n < 0)
		ret[0] = '-';
	return (ret);
}
