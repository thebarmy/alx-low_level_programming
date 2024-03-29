#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month;
int day;
int year;
int dayOfYear;

month = 02;
day = 29;
year = 2000;

printf("Date: %02d/%02d/%04d\n", month, day, year);

dayOfYear = convert_day(month, day);
print_remaining_days(month, dayOfYear, year);

return (0);
}
