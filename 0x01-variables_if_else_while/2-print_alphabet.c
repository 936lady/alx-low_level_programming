#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * I sometimes suffer from insomnia.
 * And when I can't fall asleep,
 * I play what I call the alphabet game
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
