#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *
 *  which contains a copy of the string given as a parameter.
 *
 * @str: the source string
 *
 *  Return: returns a pointer to the duplicated string.
 *
 * It returns NULL if insufficient memory was available
 *
 */
char *_strdup(char *str)
{
	char *str_len;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	str_len = (char *)malloc((sizeof(char) * len) + 1);
	if (str_len == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str_len[i] = str[i];
	str_len[len] = '\0';
	return (str_len);
}
