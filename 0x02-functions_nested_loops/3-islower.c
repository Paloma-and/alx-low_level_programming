#include "main.h"

/**
 * _islower - return the lower case character
 *
 * c is a given charater
 *
 * Returns: 0 if it's a lowcase or 1 if t's an uppercase
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
