#include <stdio.h>
#include <stdlib.h>
/**
 * main -100. Adv task
 * two digits combinations, ascending order from 01 to 89.
 * Return: Always 0
 */
int main(void)
{
	int digit0, digit1;

	for (digit0 = 0; digit0 < 10; digit0++)
	{

	for (digit1 = 0; digit1 < 10; digit1++)
	{

	if (digit0 == digit1 || digit0 > digit1)
	continue;

	else
	putchar ((digit0 % 10) + '0');
	putchar ((digit1 % 10) + '0');

	if (digit0 == 8 && digit1 == 9)
	{
	}

	else
	{

	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

