#include "main.h"
/**
 * *_strchr - Write a function that locates a character in a string. 2. strchr
 * @s: pointer string
 * @c: char
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}
