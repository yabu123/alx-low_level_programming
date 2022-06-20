#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *c, char d, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(c + i) = d;
		i++;
	}
	return (c);
}
