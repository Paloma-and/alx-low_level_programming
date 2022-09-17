#include "main.h"
#include <stdio.h>

/**
 * _isupper - function returning a uppercase character
 * @c: is the variable to be treated
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
