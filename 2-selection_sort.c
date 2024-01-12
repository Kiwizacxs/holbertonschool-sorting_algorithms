void selection_sort(int *array, size_t size)
{
	size_t i, min_index, p, temp;

	if (!array || size == 0)
	return;

	for (i = 0; i < size - 1; i++)
	{
	min_index = i;

	for (p = i + 1; p < size; p++)
	{
	if (array[min_index] > array[p])
	min_index = p;
	}

	if (min_index != i)
	{
	temp = array[i];
	array[i] = array[min_index];
	array[min_index] = temp;
    	print_array(array, size);
	}
	}
}
