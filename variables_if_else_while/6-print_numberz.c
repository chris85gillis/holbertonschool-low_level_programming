#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return Always 0 (success)
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		int digit = i + '0';
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
