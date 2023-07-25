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

	if (size == 1 || size == 0)
		return;

	if (size == 2)
	{
		if (array[1] < array[0])
			swap(&array[1], &array[0]);
		return;
	}

	while (swapOccured)
	{
		swapOccured = false;
		for (size_t i = 0; i < (size - sorted - 1); ++i)
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
