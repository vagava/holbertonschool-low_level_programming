#include "holberton.h"
/**
 * main - first argument
 * @argc: unused
 * @argv: string
 * Return: string
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
