#include <stdio.h>
#include "main.h"

/**
 *main -  1. I sometimes suffer from insomnia.
 * And when I can't fall asleep,
 * I play what I call the alphabet game
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
