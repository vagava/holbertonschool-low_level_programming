#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: operator.
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list list;
	char *s;

	va_start(list, format);
	i = 0;
	while (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", (char) va_arg(list, int));
			break;
			case'i':
				printf("%d", va_arg(list, int));
			break;
			case 'f':
				printf("%f", va_arg(list, double));
			break;
			case 's':
				s = va_arg(list, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'f' || format[i] == 's' ||
		format[i] == 'i') && format[i + 1])
			printf(", ");
		i++;
	}
	break;
	}
	va_end(list);
	printf("\n");
}
