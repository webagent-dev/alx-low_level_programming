#include "main.h"
/**
 * print_sign -main function
 *
 * @n: character to compare
 *
 * return: 1 if positive, 0 if zero, -1 if negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (10);
	}
	if (n == 0)
	{
		_putchr('0');
		return (0);
	}
	_putchar('_');
	return (-1);
}
