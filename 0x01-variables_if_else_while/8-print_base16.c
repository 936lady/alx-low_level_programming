#include <stdio.h>
#include <stdlib.h>

/**
 * main - 8. Hexadecimal
 * lowercase
 * Return: Always 0
 */
int main(void)
{
	int d;
	char l;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
		putchar('\n');

	return (0);
}
