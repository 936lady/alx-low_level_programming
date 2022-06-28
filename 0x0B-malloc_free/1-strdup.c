#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copy a string using malloc
 * 1. The woman who has no imagination has no wings
 * @str: string to duplicate
 * Return: Pointer
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
