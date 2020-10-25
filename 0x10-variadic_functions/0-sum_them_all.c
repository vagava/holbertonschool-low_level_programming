#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - suma un numero de argumentos indefinidos
 * @n: numero de argumentos
 * Return: resultado
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list list;
	int result = 0;

	va_start(list, n);
	for (unsigned int i = 0; i < n; i++)
	{
		result = result + va_arg(list, int);
	}
	va_end(list);
	return (result);
}
