#include "main.h"

/**
 * puts2 - print every other character of a string.
 * @str: character
 * Return: void
 */
void puts2(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
