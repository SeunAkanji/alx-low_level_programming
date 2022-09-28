#include "main.h"
/**
 * _evaluate - evaluate function sqrt
 * @i: integer 1
 * @n: integer 2
 * Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
	return (-1);

}
/**
 * _sqrt_recursion - evavluate sqrt
 * @n: integer
 * Return: Sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluate(i, n));
	}

}
