#include <stdio.h>
/**
 * main - 4. When I was having that alphabet soup,
 * I never thought that it would pay off
 * Write a program that prints the alphabet in lowercase,
 *followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
