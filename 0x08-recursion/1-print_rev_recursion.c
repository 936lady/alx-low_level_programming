#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * 1. Why is it so important to dream?
 * Because, in my dreams we are together
* @s: string
 * Return: Always (0)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s++);
	_putchar(*s);
}
