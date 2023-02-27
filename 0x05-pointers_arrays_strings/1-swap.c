#include "main.h"

/**
* swap_int - swap
* @*a: first int
* @*b: second integer
*
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
