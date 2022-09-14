#include "main.h"

/**
 * print_alphabet - print letters from a to z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;
	char j = 'z';
	char space = '\n';

	for (i = 'a'; i <= j; i++)
	{
	_putchar(i);
	}
	_putchar(space);
		return;
}
