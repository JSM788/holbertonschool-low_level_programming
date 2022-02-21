#include "main.h"

/**
 * *_memset - check your code
 * @n: character
 * @s: pointer
 * @b:character
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for ( ; n > 0; s++, n--)
	{
		*s = b;
	}

	return (s);
}
