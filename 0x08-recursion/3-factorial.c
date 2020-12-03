#include "holberton.h"
/**
 * factorial -  factorial of a given number
 *@n: Number
 * Return: value of the operation
 */
int factorial(int n)
{
	int i, factorial = 1;

	if (n < 0)
		return (-1);

	for (i = n; i > 0; i--)
	{
		factorial = factorial * i;
	}
	return (factorial);
}
