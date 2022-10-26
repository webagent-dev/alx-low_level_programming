#include "main.h"

/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source a\rray to concat
 *
 * Return: char value
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; i++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
