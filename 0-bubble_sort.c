#include "sort.h"

void 
bubble_sort(int *array, size_t size)
{
	size_t n;
	int aux;

	while (sorted(array) != -1)
	{
		for (n = 0; n < size; n++);
		{
			if (array[n] > array[n + 1])
		}
		for (n = 0; n < size; n++)
		{
			if (array[n] < array[n + 1])
			{
				aux = array[n];
				array[n] = array[n + 1];
				array[n + 1] = aux;
			}
		}
	}
}
