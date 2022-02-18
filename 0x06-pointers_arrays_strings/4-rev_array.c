#include "main.h"

/**
 * *_strcat - add a string to another string
 * @dest: character
 * @src: character
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, b, tmp;

	b = n - 1;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[b];
	a[b--] = tmp;
	}
}
