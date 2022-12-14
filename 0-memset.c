#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: Pointer block of memory to be filled
 * @b: value to set
 * @n: bytes of the memory
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
