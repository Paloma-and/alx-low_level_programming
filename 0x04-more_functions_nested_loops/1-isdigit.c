#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function checking for a digit
 *
 * @c: variable being checked
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
