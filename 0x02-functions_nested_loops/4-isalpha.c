#include "main.h"
/**
 * _isalpha - function
 *
 * @c: the character to evaluate
 *
 * Return: returns 1 if @c is an uppercase or a lowercase character,
 * 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
