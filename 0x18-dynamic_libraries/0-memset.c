#include "main.h"
#include <string.h>

/**
 * _memset -> this is a function that fills memory
 * @s: a string
 * @b: a character
 * @n: an integer
 * Return: returns a string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
