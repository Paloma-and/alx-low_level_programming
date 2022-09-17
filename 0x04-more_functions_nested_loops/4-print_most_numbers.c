#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_most_numbers - function
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i = 0;
	char space = '\n';

	for  (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))
		{
		_putchar(i);
		}
	}
	_putchar(space);
		return;
}
