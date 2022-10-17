#include <stdio.h>

/**
 * main - This is the main function
 * Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: The function returns 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
