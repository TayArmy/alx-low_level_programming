#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wordcounter(char *str, int pos, char firstchar);
/**
 * strtow - check the code for ALX School students.
 * @str: string
 * Return: Null or string.
 */

char **strtow(char *str)
{
	int wc, wlen, getfirstchar, l, i, j;
	char **p;

	for (l = 0; str[l]; l++)
		;
	if (str == NULL)
		return (NULL);
	wc = wordcounter(str, 0, 0);
	if (l == 0 || wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wlen = 0; i < wc; i++)
	{
		/* Allocate memory for nested elements */
		wlen = wordcounter(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wlen++;
		p[i] = malloc(wlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		/* initialize each element of the nested array with the word*/
		getfirstchar = wordcounter(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfirstchar++;
		else if (str[0] == ' ')
			getfirstchar++;
		for (j = 0; j < wlen; j++)
			p[i][j] = str[getfirstchar + j];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}

/**
 * wordcounter -counts
 * @str: string
 * @pos: integer
 * @firstchar: character
 * Return: w
 */
int wordcounter(char *str, int pos, char firstchar)
{
	int i, w, c, f;

	str[0] != ' ' ? (w = 1) : (w = 0);
	for (i = 0, f = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && f == 0)
		{
			w++;
			f = 1;
		}
		if (pos > 0 && pos == w)
		{
			if (pos > 0 && pos == w && firstchar > 0)
				return (i);
			for (c = 0; str[i + c + 1] != ' '; c++)
				;
			return (c);
		}
		if (str[i] == ' ')
			f = 0;
	}
	return (w);
}
