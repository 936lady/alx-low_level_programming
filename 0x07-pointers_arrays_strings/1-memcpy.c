#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * 1. memcpy
 * @dest:destination
 * @src: source
 * @n: bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (dest);
}
