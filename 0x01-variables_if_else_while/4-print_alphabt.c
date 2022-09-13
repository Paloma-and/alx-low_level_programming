#include<stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	char space = '\n';

	for (x = 'a'; x <= 'z'; x++)
	{
	if ((x == 'e') || (x == 'q'))
	{
	continue;
	}
	putchar(x);
	}
	putchar(space);
	return (0);
}
