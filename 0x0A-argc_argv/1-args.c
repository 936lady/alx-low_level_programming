#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * 1. Silence is argument carried out by other means
 * @argc: parameters counter
 * @argv: string pointer
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
