#include "3-calc.h"
/**
 * main - recibe argumentos para realizar operaciones
 *
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int (*p_fun_op);
	int res, a1, a2;

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	p_fun_op = get_op_func(argv[2]);

	res = (p_fun_op)(a1, a2);
	printf("%d", res);
}
