#include "main.h"

/**
 * _islower - Checks for lower case alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
