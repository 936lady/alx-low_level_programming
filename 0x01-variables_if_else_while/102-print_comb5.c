#include <stdio.h>

/**
 * main - 12. Software is eating the world
 * 0 to 99. A program that prints all possible combinations
 * of two two-digits numbers.
 * Return: Always 0
 */

int main(void)
{
	int d, e;  /*digit 0 and 1*/

	for (d = 0; d <= 99; d++)
	{
		for (e = 0; e <= 99; e++)
		{
			if (d < e && d != e)
			{
				putchar((d / 10) + '0');
				putchar((d % 10) + '0');
				putchar(' ');
				putchar((e / 10) + '0');
				putchar((e % 10) + '0');
				if (d != 98 || e != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
