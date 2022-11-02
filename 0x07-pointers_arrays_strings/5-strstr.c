#include "main.h"
/**
 * _strstr - loctes substring
 * @heystack: string to locate
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 *
 */
char *_strstr(char *heystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (heystack[i])
	{
		while (needle[i] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
