#include "holberton.h"
/**
 * print_number - Prints any number with putchar
 * @n: Number to print.
 *Return: Always void.
 */
void print_number(int n)
{
	unsigned int abs, cifras, divisor, i, num, last, digito, numero;

	if (n < 0)
	{
		numero = -1 * n;
		abs = -1 * n;
	}
	else
	{
		numero = n;
		abs = n;
	}
	/*Calculo de cantidad de cifras*/
	for (cifras = 1 ;  numero / 10 > 0 ; cifras++)
		numero = numero / 10;
	/*Calculo del divisor*/
	divisor = 1;
	for (i = cifras - 1 ; i > 0 ; i--)
		divisor = divisor * 10;
	/*Extraer numero*/
	if (n < 0)
		_putchar('-');
	for (digito = cifras ; digito >= 1 ; digito--)
	{
		num = abs / divisor;
		if (num >= 10)
		{
			last = num % 10;
			_putchar(last + '0');
		}
		else
			_putchar(num + '0');
		divisor = divisor / 10;
	}
}
