#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int length = 0;
int i;

while (*s != '\0')
{
length++;
s++;
}
s--;
for (i = length; i > 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}
