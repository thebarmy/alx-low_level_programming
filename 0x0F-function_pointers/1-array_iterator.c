#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array
 * @size: elements to print
 * @action: pointer to print
 * Retun: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
       size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

