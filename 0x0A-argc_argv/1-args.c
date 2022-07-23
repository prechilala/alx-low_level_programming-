#include "main.h"
#include <stdio.h>

/**
 * main -> a program that prints the number of arguments passed
 * @argc: arguement count
 * @argv: argument value
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
