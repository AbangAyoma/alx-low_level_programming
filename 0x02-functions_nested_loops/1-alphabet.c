#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - Print lowercase alphabets
 *
 * function print_alphabet :print alphabets
 *
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
