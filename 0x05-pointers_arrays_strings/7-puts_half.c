#include "main.h"
/**
 * puts_half - function that prints half of a string
 * if odd len, n = (l - 1)/2
 * @str: input
 * return: half of input
 */
void puts_half(char *str)
{
int a, n, l;
l = 0;

for (a = 0; str[a] != '\0'; a++)
l++;
n = (l / 2);
if ((l % 2) == 1)
n = ((l + 1) / 2);
for (a = n; str[a] != '\n'; a++)
putchar(str[a]);
}
