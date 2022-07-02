#include <stdio.h>

/**
 * main - to carry out tasks
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;


	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);

}
