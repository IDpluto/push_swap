#include "push_swap.h"

void swap(int *arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void heapify(int *arr, int size, int i)
{

	int c;

	c = 2 * i + 1;
	if (c < size - 1 && arr[c] < arr[c + 1])
		c++;
	// 오른쪽 자식 존재하면서
	// 오른쪽 자식이 더 크면 오른쪽 자식 선택

	if (c < size && arr[i] < arr[c])
		swap(arr, i, c);
	// 부모보다 자식이 더 크면
	// 둘이 바꿈

	if (c < size / 2)
		heapify(arr, size, c);
	// 내부노드에 한정하여 반복
}

void heap_sort(int *arr, int size)
{

	int i;

	i = size / 2;
	while (i >= 0)
	{
		heapify(arr, size, i);
		i--;
	}
	i = size - 1;
	while (i >= 0)
	{
		swap(arr, i, 0);
		heapify(arr, i, 0);
		i--;
	}
}
