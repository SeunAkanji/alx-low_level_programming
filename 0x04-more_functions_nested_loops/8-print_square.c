#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a sqaure
 * @size: size of the sqaure
 */

void print_sqaure(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; ++1)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

