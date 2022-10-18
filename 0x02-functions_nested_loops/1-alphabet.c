#include "main.h"

/**
 * main - check the code
 * print_alphabet - Print lowercase alphabets
 *
 * function print_alphabet :print alphabets
 * Return: Always (0)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
