#include "sort.h"

/**
 * selection_sort - A function that implements the selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = i; j < size; ++j)
		{
			if (array[j] < array[i])
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
}
