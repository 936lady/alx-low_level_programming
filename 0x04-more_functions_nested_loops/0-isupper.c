#include  "main.h"

/**
 * _isupper - checks is a letter is uppercase
 * @c: variable to be checked
 * Return: 1 for uppercase, 0 is else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
