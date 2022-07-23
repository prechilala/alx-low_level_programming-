#include <stdio.h>

/**
 * main -> A program that prints all arguements it receives
 * @argc: arguement count
 * @argv: argument value
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
