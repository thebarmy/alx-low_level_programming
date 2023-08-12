#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
char y;
while (a < 10)
{
y = (char)(a + '0');
putchar(y);
a++;
}
print("\n");
return (0);
}
