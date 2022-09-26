#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: double pointer to a string
 * @d: pointer to the string to set s to
 * Return: Description of the returned value
 */
oid set_string(char **s, char *d)
{
	*s = d;
}
