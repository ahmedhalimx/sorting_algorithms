#include "sort.h"

/**
 * bubble_sort - a function that implements the bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	bool swapOccured = true;
	size_t sorted = 0;

	if (array == NULL || size == 0)
		return;

	while (swapOccured)
	{
		size_t i;

		swapOccured = false;
		for (i = 0; i < (size - sorted - 1); ++i)
		{
			if (array[i + 1] < array[i])
			{
				swap(&array[i + 1], &array[i]);
				print_array(array, size);
				swapOccured = true;
			}
		}
		++sorted;
	}
}

