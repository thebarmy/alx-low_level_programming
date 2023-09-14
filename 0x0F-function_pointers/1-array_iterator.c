#include "function_pointer.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array
 * @size: elements to print
 * @action: pointer to print
 * Retun: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
		while (i < size)
		{
			if (action(array[i])
					return (i);
			i++;
		}
	return (-1);
}

