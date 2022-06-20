#include "main.h"
/**
*_memset - Write a function that fills memory with a constant byte. 0. memset
 * @s: Returns a pointer to the memory area s
 * @b: constant to fill the memory
 * @n: bytes number
 * Return: A pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
