#include "main.h"

/**
 *print_alphabet_x10 - task 2.
 */
void print_alphabet_x10(void)
{
	int a;
	int x;

	for (x = 0; x < 10 ; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}

