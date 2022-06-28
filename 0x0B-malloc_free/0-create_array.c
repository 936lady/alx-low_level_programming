#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 * 0. Float like a butterfly, sting like a bee
 * @size: size of array
 * @c: character
 * Return: pointer to array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
