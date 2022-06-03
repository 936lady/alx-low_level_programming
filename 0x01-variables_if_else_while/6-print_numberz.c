#include <stdio.h>

/**
 * main -6. Numberz
 * Write a program that prints all single digit numbers of base 10
 *  starting from 0.
 * Return: Always 0.
 **/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
