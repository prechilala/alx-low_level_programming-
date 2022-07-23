#include "main.h"
#include <stdio.h>

/**
 * main -> A program that prints all arguements it receives
 * @argc: arguement count
 * @argv: argument value
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	if (argc--)
	{
		printf("%s\n", argv++);
	}
	return (0);
}
