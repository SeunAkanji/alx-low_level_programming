#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Program that prints the alphabet in lower case
 *
 * Return: Exit int function with an int 0
 */
void print_alphabet(void)
{
	int aj;

	for (aj = 'a'; aj <= 'z'; aj++)
	{
		_putchar(aj);
	}
	_putchar('\n');
}

