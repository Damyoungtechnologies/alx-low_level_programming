#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int arr;

	num = 1;
	for (arr = 1; arr <= power; arr++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char f;

	f = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor)
	{
		check = n & divisor;
		if (check == divisor)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
