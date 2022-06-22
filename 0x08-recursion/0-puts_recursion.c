#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line. 0. She locked away a secret,
 *deep inside herself, something she once knew to be true...
 * but chose to forget
 * @s: string parameter
 * Return: 0
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}

