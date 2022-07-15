#include "main.h"

/**
 * _strcat -> a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
*/
char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 >= 0)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			breat;
		count1++;
		count2++;

	}
	return (dest);
}
