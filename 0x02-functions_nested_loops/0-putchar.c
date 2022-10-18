#include "main.h"

/**
 * main - c code runs from here
 *Initial Description: Print _putchr
 * Return: Always (0)
 * Program to print _putchar, followed by a new line.
 * Prgram should return 0
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
	{
		_putchar (c[i]);
	}
	_putchar ('\n');
	return (0);
}
