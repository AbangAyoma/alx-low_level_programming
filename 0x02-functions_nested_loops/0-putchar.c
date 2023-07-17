#include "main.h"

/**
 *main - print a _putchar program
 *
 * Return: Always (0)
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%c%c%c%c%c%c%c%c",c[i]);
	}
	_putchar ('\n');
	return (0);
}
