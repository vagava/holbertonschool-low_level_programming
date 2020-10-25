#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - imprime cadenas de caracteres
 * @separator: separa las cadenas
 * @n: numero de argumentos
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*variable tipo va_list*/
	va_list list;
	/*inicializa la macro*/
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		/*recorre la lista de argumentos*/
		char *str = va_arg(list, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	/*libera la memoria*/
	va_end(list);
	printf("\n");
}
