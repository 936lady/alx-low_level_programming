#include <stdio.h>

/**
 * main - 102. Software is eating the world
 * 0 to 99. A program that prints all possible combinations
 * of two two-digits numbers.
 * Return: Always 0
 */

int main(void)
{
	int digit0, digit1;

	for (digit0 = 0; digit0 < 10; digit0++)
	{

	for (digit1 = 0; digit1 < 10; digit1++)
	{

	putchar ((digit0 / 10) + '0');
	putchar ((digit0 % 10) + '0');

	if (digit0 == 9 && digit1 == 9)
	continue;

	else
	putchar (',');
	putchar (' ');
	}
	}
	putchar('\n');
	return (0);
}
