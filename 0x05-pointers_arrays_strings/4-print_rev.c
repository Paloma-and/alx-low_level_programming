#include "main.h"

/**
 * print_rev - function
 *
 * @s: parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length > 0)
		_putchar(s[--length]);
	_putchar(10);
}
