#include "main.h"

/**
 * _puts - function printing a string
 *
 * @str: parameter
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;
	char space = '\n';

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar(space);
		return;
}
