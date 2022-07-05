#include "main.h"

/**
 * print_alphabet_x10 -> prints 10 times the lowercase alphabets
 * Return: always 0
*/

void print_alphabet_x10(void);
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
