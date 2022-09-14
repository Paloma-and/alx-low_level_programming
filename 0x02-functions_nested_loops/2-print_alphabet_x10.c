#include "main.h"

/**
 * print_alphabet_x10 - print letters from a to z ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char i;
	char j = 'z';
	int a;
	char space = '\n';

for (a = 0; a < 10; a++)
{
for (i = 'a'; i <= j; i++)
{
_putchar(i);
}
_putchar(space);
}
		return;
}
