#include<stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;

	for (x = 0; x < 10 ; x++)
	{
	putchar((x % 10) + '0');
	}
	putchar('\n');
		return (0);
}
