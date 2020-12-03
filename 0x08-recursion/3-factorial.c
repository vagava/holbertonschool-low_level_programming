#include "holberton.h"
/**
 * factorial -  factorial of a given number
 *@n: Number
 * Return: value of the operation
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
