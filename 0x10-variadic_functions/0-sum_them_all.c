#include <stdarg.h>
/**
 * sum_them_all - suma un numero de argumentos indefinidos
 * @n: numero de argumentos
 * Return: resultado
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
/* definir variable tipo va_list*/
	va_list list;
/*inicializar macro con lista de argumentos y argumentos requeridos*/
	va_start(list, n);
/*ciclo para recorrer los argumentos dados*/
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(list, unsigned int);
	}
/*liberar la memoria asignada*/
	va_end(list);
	return (result);
}
