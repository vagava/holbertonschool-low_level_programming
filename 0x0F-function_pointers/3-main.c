#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - recibe argumentos para realizar operaciones
 *
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(argv[2])) != NULL )
		printf("%d\n", get_op_func(argv[2])		\
		       (atoi (argv[1]), atoi (argv[3])));
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
}
