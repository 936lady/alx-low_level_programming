#include "main.h"
/**
 * _pow_recursion - Write a function that returns
 * the value of x raised to the power of y.
 * 4. Once an idea has taken hold of the brain
 * it's almost impossible to eradicate.
 * @x: integer
 * @y: power
 * Return: power of
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

