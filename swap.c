#include "sort.h"

/**
 * swap - a function that swaps to integrs
 * @src: first arg
 * @dest: second arg
 * Return: Nothing.
 */
void swap(int *src, int *dest)
{
	int tmp = *src;

	*src = *dest;
	*dest = tmp;
}
