/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   q_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:28:51 by dohlee            #+#    #+#             */
/*   Updated: 2021/10/23 17:28:52 by dohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arr_qsort(int *arr, int l, int r)
{
	int	i;
	int	j;
	int	pvt;
	int	tmp;

	i = l;
	j = r;
	pvt = arr[(l + r) / 2];
	while (i <= j)
	{
		while (arr[i] < pvt)
			i++;
		while (arr[j] > pvt)
			j--;
		if (i <= j)
		{
			tmp = arr[i];
			arr[i++] = arr[j];
			arr[j--] = tmp;
		}
	}
	if (l < j)
		arr_qsort(arr, l, j);
	if (i < r)
		arr_qsort(arr, i, r);
}
