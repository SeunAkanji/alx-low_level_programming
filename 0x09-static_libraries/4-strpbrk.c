#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: C string to be scanned
 * @accept: Character that matches
 * Return: string that matches the character
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;

	}
	return (0);

}
