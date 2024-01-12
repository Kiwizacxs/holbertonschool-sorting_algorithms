#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, min_index = 0, p, temp, swap_occurred = 0;

	if (!array)
	return;

	while (i < (size - 1))
	{
	min_index = i;
	p = i + 1;

	while (p < size)
	{
	if (array[min_index] > array[p])
	min_index = p;
	p++;
	}

	if (min_index != i)
	{
	temp = array[i];
	array[i] = array[min_index];
	array[min_index] = temp;
	print_array(array, size);
	swap_occurred = 1;
	}
	else
	{
	swap_occurred = 0;
	}

	i++;

	if (swap_occurred == 0)
	break;
	}
}
