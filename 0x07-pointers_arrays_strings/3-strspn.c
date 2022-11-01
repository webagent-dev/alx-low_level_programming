#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accept bytes
 * Return: return unsigned values
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (i);
}
