#include "sort.h"

/**
 * selection_sort - A function that implements the selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing.
 */
void selection_sort(int *array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i; j < size; ++j)
		{
			if (array[j] < array[i])
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
}
