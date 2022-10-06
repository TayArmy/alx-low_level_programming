#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_num - checks if input is composed of digits
 *
 * @s: input
 *
 * Return: 1 if n is num, 0 otherwise
 */

int is_num(char *s)
{
int i;

i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= '0' && *(s + i) <= '9')
{
i++;
}
else
{
return (0);
}
}
return (1);
}




/**
 * mul - returns the prdt of two numbers
 *
 * @argc: number of args
 *
 * @argv: arr of args
 *
 * Return: 0 - success
 */

int mul(int argc, char *argv[])
{

if ((argc != 3) || !(is_num(argv[1]) && is_num(argv[2])))
{
printf("Error\n");
exit(98);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
