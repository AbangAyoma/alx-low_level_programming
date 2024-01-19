#include "main.h"

/**
 * main - print a _putchar program
 *
 * Return: Always (0)
 */
int main(void)
{
	char c[sizeof(char) * 8] = "_putchar";
        int i;

	for (i = 0; i < 8; i++)
	{

	putchar(c[i]);

	}
	putchar('\n'); 
	return (0);
}
