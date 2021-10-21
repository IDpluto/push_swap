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
