#include "main.h"

/**
 * _memcpy - input
 * @des: input pointer to string destination
 * @sr: input pointer to source type string
 * @n: number of bytes
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(des + i) = *(sr + i);
i++;
}
return (des);
}
