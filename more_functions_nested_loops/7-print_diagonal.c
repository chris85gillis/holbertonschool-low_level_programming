#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line according to parameters
 * @n: the number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == i)
				putchar('\\');
				else if (y < x)
				putchar(' ');
			}
			putchar('\n');
		}
	}
}
