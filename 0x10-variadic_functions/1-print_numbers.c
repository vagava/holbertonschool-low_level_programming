#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - imprime numeros dados
 * @separator: separador de argumentos
 * @n: numero de argumentos
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int imp;

	va_start(list, n);

	for (unsigned int i = 0; i < n; i++)
	{
		imp = va_arg(list, int);

		if (i == n - 1)
			printf("%d", imp);
		else if (separator != NULL)
			printf("%d%s", imp, separator);
		else
			printf("%d ", imp);
	}
	va_end(list);
	printf("\n");
}
