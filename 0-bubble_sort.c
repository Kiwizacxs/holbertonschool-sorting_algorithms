#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description: This function implements the Bubble Sort algorithm
 *              to sort an array of integers in ascending order.
 */
void bubble_sort(int *array, size_t size)
{
	size_t n;
	int aux = 0;

	while (aux != -1)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1] && n + 1 != size)
			{
				aux = array[n];
				array[n] = array[n + 1];
				array[n + 1] = aux;
				print_array(array, size);
			}
		}
		aux = sorted(array, size);
	}
}

/**
 * sorted - Checks if an array is sorted in ascending order.
 * @array: The array to be checked.
 * @size: The size of the array.
 *
 * Return: 0 if not sorted, -1 if sorted.
 */
int sorted(int *array, size_t size)
{
	size_t n = 0;

	while (n != size && n + 1 != size)
	{
		if (array[n] > array[n + 1])
			return (0);
		n++;
	}
	return (-1);
}
