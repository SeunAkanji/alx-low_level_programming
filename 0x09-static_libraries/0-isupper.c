#include "main.h"

/**
 * _isupper - checks a character for the case
 * @c: member
 * Return: 1 (on success) otherwise 0
 */

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}

