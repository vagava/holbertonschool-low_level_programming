#include "holberton.h"
/**
 * is_prime - serch if the number is prime
 * @n: number
 * @multiple: multiple of n
 * Return: 1 if n is a prime number
 */
int is_prime(int n, int multiple)
{
	if (n % multiple == 0 || n <= 1)
		return (0);
	else if (n >= multiple)
		return (1);
	else
		return (is_prime(n, multiple + 1));
}
/**
 * is_prime_number - serch a prime number.
 * @n: number
 * Return: 1 if n is a prime number
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
