#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * 3. You mustn't be afraid to dream a little bigger, darling
 *@n: integer
 * Return: if n is lower than 0,  -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
