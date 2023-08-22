#include "main.h"
/**
 * puts_half - function that prints half of a string
 * if odd len, n = (length - 1)/2
 * @str: input
 * return: half of input
 */
void puts_half(char *str)
{
int a, n, le;

le = 0;

for (a = 0; str[a] != '\0'; a++)
le++;

n = (le / 2);

if ((le % 2) == 1)
n = ((le + 1) / 2);
for (a = n; str[a] != '\n'; a++)
putchar(str[a]);
putchar('\n');
}
