#include <stdio.h>
#include <stdlib.h>
/**
 * main -100. Adv task
 * two digits combinations, ascending order from 01 to 89.
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 90; x++)
	{
		for ()
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
		}
		if (x != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
