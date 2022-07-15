#include "main.h"

/**
 * string_toupper - a function that changes a string to upper case
 * @x: an input string
 * Return: char pointer to converted string
*/

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
