#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concats string
 * @s1: string one
 * @s2: sting two
 * @n: n amount of btyes
 *
 * Return: return a char value
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigneded int sized1 = 0, size2 = 0, i;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}
}
