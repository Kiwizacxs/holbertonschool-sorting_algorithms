#include "sort.h"
/**
 * lomuto_partition - Partitions an array
 * using the Lomuto scheme for QuickSort.
 * Elements smaller than the pivot are placed on the left,
 * and elements greater than the pivot are placed on the right.
 * The pivot is the element at the last position in the array.
 * @array: Array to be sorted.
 * @low: Start index of the array.
 * @high: End index of the array.
 * @array_size: Size of the array.
 * Return: Index where the pivot is placed after the partition.
 */
int lomuto_partition(int *array, int low, int high, size_t array_size)
{
	int temp, partition_index = low, current_index = low;

	while (current_index < high)
	{
	if (array[current_index] < array[high])
	{
	if (partition_index != current_index)
	{
	temp = array[current_index];
	array[current_index] = array[partition_index];
	array[partition_index] = temp;
	print_array(array, array_size);
	}
	partition_index++;
	}
	current_index++;
	}

	if (partition_index != high)
	{
	temp = array[partition_index];
	array[partition_index] = array[high];
	array[high] = temp;
	if (array[partition_index] != array[high])
	print_array(array, array_size);
	}
	return (partition_index);
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: Array to be sorted.
 * @array_size: Size of the array.
 * Return: void.
 */
void quick_sort(int *array, size_t array_size)
{
	if (array == NULL || array_size <= 1)
	return;

	recursive_quick_sort(array, 0, array_size - 1, array_size);
}

/**
 * recursive_quick_sort - Recursively sorts an array.
 * @array: Array to be sorted.
 * @start: Start index of the array.
 * @end: End index of the array.
 * @array_size: Size of the array.
 * Return: void.
 */
void recursive_quick_sort(int *array, int start, int end, size_t array_size)
{
	int pivot;

	if (end > start)
	{
	pivot = lomuto_partition(array, start, end, array_size);
	recursive_quick_sort(array, start, pivot - 1, array_size);
	recursive_quick_sort(array, pivot + 1, end, array_size);
	}
}
