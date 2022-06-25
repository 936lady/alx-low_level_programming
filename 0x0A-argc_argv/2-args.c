#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * 2. The best argument against democracy is a
 * five-minute conversation with the average voter
 * @argc: parameters counter
 * @argv: string pointer
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
