#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - check the code
 * @separator: pointer
 * @n: character
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *valores;

	va_list parametros;

	va_start(parametros, n);

	for (i = 0; i < n; i++)
	{
		valores = va_arg(parametros, char *);
	if (separator == NULL || i == 0)
		printf("%s", valores);
	else if (parametros == NULL)
		printf("nil");
	else
		printf("%s%s", separator, valores);
	}
	va_end(parametros);
	printf("\n");
}
