/* a program to allocate memory */ 
#include "main.h"
#include <stdlib.h>

/* exit status : exit(98) */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return(ptr);
}


