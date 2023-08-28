#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to y s with the cst  byte b
 * @s: starting adress of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
