#include "holberton.h"
/**
 * _sqrt - serch the root of n.
 * @n: number to find the root
 * @root: root of n
 * Return: root of n or -1
 */
int _sqrt(int n, int root)
{
	if (n < 0)
	return (-1);

	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		root++;
		return (_sqrt(n, root));
	}

}
/**
 * _sqrt_recursion - find the natural square root of a number.
 * @n: number to find the root
 * Return: the root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
