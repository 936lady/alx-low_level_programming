#include "main.h"

/**
 * puts2 - print every other character of a string.
 * @str: character
 * Return: void
 */
void puts2(char *str)
{
int len, i;

len = strlen(str);
for (i = 0; i < len ; i += 2)
_putchar(str[i]);
_putchar('\n');
}
