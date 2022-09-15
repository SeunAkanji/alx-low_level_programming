#include "main.h"

/**
 * _isdigit - checks whether or not a character is a digit
 * @c: member
 * Return: 1 (on success) otherwise 0
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
