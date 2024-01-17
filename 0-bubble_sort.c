#include "sort.h"

void 
bubble_sort(int *array, size_t size)
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

int
sorted(int *array, size_t size)
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
