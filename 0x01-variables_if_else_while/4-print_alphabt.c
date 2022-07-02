#include <stdio.h>

/**
 * main - to carry out tasks
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);

}
