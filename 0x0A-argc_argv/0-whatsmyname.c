#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints its name,
 * followed by a new line.
 *0. It ain't what they call you, it's what you answer to
 * @argc: Counts parameters
 * @argv: String pointers
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
