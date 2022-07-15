#include "main.h"

/**
 * string_toupper - a function that changes a string to upper case
 * @s: an input string
 * Return: char pointer to converted string
*/

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}
	return (s);
}
