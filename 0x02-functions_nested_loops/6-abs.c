#include "holberton.h"
/**
 * _abs - computer absolute value
 * @a: num
 * Return: result
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}

}
