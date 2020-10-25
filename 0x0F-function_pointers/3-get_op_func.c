#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - recorre y compara la estructura op
 * @s: igualador de operador.
 * return - puntero a la funcion de la operacion.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s != *ops[i].op)
			i++;
	}
	return (ops[i].f);
}
