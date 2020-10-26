#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - recibe argumentos para realizar operaciones
 * @argc: cantidad de argumentos
 * @argv: argumentos
 * return: cero
 */
int main(int argc, char **argv)
{
	int a1, a2;

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(argv[2])) != NULL)
		printf("%d\n", get_op_func(argv[2])(a1, a2));
	else
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		   printf("Error\n");
		   exit(100);
	}
	return (0);
}
