#include "main.h"
 
/**
 * print_chessboard - print the second array of the chessboard
 * @a: Second array of characters
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
