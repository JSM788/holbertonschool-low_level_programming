#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: pointer
 * @size: character
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
