#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to  anvarray
 * @size: Size of an array
 * @action: action(function) to iterate throw array
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action == NULL || array == NULL)
		return;
	for (; x < size; x++)
		action(array[x]);
}
