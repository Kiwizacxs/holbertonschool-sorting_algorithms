#include "sort.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    if (!array || size == 0)
    {
        printf("\n");
        return;
    }

    printf("%d", array[0]);
    for (i = 1; i < size; i++)
    {
        printf(", %d", array[i]);
    }
    printf("\n");
}
