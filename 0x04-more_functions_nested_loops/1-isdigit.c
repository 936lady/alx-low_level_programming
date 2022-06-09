#include "main.h"

/*
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit
 * Return: 1 if its from 0 to 9, 0 if else.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

