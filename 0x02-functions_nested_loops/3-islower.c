#include "main.h"

/**
 * _islower : checks for a lowercase character
 *
 * @c: is a letter
 *
 * Returns: 1 if @c is a letter, 0 otherwise
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
