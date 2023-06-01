#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle of squares according to parameters
 * @size: the size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
