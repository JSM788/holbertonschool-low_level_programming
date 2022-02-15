#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character
 * Return: 0
 */

void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != 0; i++)
	{
	}

	for (a = i / 2; a < 10; a++)
	{	_putchar(str[a]);
	}

	_putchar(10);

}

