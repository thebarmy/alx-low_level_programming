#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter[27] = "";
char a1;
for (a1 = 'a'; a1 <=  'z'; a1++)
{
letter[a1 - 'a'] = a1;
}
puts(letter);
return (0);
}
