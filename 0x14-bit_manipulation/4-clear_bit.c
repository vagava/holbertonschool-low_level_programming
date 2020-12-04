#include "holberton.h"
/**
  * clear_bit - sets the value
  * @n: pointer to n.
  * @index: index.
  * Return: 1 or -1;
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
