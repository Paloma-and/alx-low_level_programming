#include "main.h"

/**
 * _islower: check for the lowercase character
 *
 * c: is a given charater
 *
 * Returns: 0 if it's a lowcase character or 1 if else.
 *
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
