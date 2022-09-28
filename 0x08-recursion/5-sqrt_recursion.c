#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

