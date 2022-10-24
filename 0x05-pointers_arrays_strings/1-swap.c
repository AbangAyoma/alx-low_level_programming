#include "main.h"

/**
 *  swap_int -Entry point
 *   Description -A function that swaps the values of two integers
 *   *@a: input saved into a
 *   *@b: input saved into b
 *   Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
