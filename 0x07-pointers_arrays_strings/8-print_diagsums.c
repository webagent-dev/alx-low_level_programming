#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal summaries
 * @a:array to use
 * @size: sizes of diagonal
 *
 */

void print_diagsums(int *a, int size)
{

	int i;
	int j;
	int p;
	int l = 0;
	int r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
