#include "main.h"

int findstar(char *s, char c, int i, int n);

/**
 * wildcmp - check the code 
 * @s1: string
 * @s2: string
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' || *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' || *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
		{
			return (wildcmp(++s1, s2));
		}
		else
		{
			return (wildcmp(s1, findstar(s2, *(s1 + 1), 0, 0) + s2));
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, ++s2));
		}
		else
		{
			return (wildcmp(s1 + findstar(s1, *(s2 + 1), 0, 0), s2));
		}
	}
	return (0);
}

/**
 * findstar - compares
 * @s: string
 * @c: character
 * @i: iterator
 * @n: num
 * Return: 0 or 1
 */
int findstar(char *s, char c, int i, int n)
{
	if (*(s + i) == '\0')
		return (n + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		n = i;
	return (findstar(s, c, i + 1, n));
}
