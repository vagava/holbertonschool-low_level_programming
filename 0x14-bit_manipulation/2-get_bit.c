#include "holberton.h"
/**
  * get_bit - bit at a given index.
  * @n: number
  * @index: index.
  * Return: value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res;

	if (index > 64)
		return (-1);
	res = n >> index;
	return (res & 1);
}
