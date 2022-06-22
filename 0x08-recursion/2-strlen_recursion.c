#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * 2. Dreams feel real while we're in them.
 * It's only when we wake up that we realize
 * something was actually strange
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
		if (*s == '\0')
			return (0);
		s++;
	return (1 + _strlen_recursion(s));
}

