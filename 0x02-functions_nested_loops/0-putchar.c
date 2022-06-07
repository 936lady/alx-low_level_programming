#include <unistd.io>

/**
 * _putchar writes
 *
 * REturn 1
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
