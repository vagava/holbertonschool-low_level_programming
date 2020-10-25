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
	unsigned int imp = 0, i;
/*variable tipo va_list*/
	va_list list;
/*inicializar macro*/
	va_start(list, n);
/*recorrer argumentos*/
	for (i = 0; i < n; i++)
	{
		imp = va_arg(list, int);

		if (i == n - 1 || separator == NULL)
			printf("%d ", imp);
		else
			printf("%d%s", imp, separator);
	}
/*liberar memoria*/
	va_end(list);
	printf("\n");
}
