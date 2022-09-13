#include<stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 'a';
	int y = 'A';
	char space = '\n';

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
	putchar(y);
	}
	putchar(space);
		return (0);
}
