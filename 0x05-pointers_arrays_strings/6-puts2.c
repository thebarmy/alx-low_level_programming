#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *@str: input
 *Return: print 
 */
void puts2(char *str)
{
int l = 0;
int t = 0;
char *y = str;
int o;

while (*y != '\0')
{
y++;
l++;
}
t = l - 1;
for (o = 0; o <= t; o++)
{
if (o % 2 == 0)
{
putchar(str[o]);
}
}
putchar('\n');
}
