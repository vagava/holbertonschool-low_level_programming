#include "holberton.h"
/**
  * flip_bits - the number of bits you would need to flip to get
  * from one number to another.
  * @n: number
  * @m: nuember
  * Return: The number of bits you would need.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n ^= m;
	while (n)
	{
		i += n & 1;
		n = n >> 1;
	}
	return (i);
}
