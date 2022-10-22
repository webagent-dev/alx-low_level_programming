#include "main.h"
/**
 * print_diagonal - print diagonal stuff
 *
 * @n: integer to set diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
