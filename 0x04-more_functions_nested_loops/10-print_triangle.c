#include "main.h"

/**
 * print_triangle -> this is a function that prints a triangle
 * @size: Size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; i <= size; a++)
		{
			for (b = a; b < size; j++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

	}
}
