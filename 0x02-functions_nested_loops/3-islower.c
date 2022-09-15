#include "main.h"

/**
 * _islower - function
 *
 * @c: the character to evaluate
 *
 * Return: _islower returns 1 if @c is a lowercase
 * , 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
