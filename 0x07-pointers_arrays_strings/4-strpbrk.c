#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the string since the first found accepted character
*/
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{	

		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		S++;
	}
	return (NULL);
}
