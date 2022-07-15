#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element in an array
*/

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a
	for (i = 0; i < n; I++)
		p++;
	for (k = 0; k < i / 2; K++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}

}
