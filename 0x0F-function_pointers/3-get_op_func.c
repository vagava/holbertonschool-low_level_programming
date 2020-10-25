#include "3-calc.h"
/**
 * get_op_func - recorre y compara la estructura op
 * @s: igualador de operador.
 * return - puntero a la funcion de la operacion.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s = *ops[i].op)
			return (ops[i].f);
		i++;
	}
}
