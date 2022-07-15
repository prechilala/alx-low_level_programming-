#include "main.h"
#include <string.h>

/**
 * _strncpy -> function to copy
 * @dest: first parameter
 * @src: second parmeter
 * @n: third parameter
 * Return: a string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
