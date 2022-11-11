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
	unsigneded int i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
