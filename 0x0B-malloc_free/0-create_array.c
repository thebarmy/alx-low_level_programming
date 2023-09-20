#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size
 * @c: char
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	p = malloc(sizeof(char) * size);
	if (!size || !p)
		return (NULL);
	for (a = 0; a < size; a++)
		p[a] = c;
	return (p);

}

