#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;
char a;
for (a = 'a'; a <= 'z'; a++)
{
if ((a != 'q') && (a != 'e'))
{
alpha = a;
putchar(alpha);
}
}
putchar('\n');
return (0);
}
