#include "main.h"
/**
* print_last_digit - this is the last digit
* @a: parameter
* Return: 0 or 1
*/
int print_last_digit(int a)
{
	int j;

	j = a % 10;

	if (j < 0)
		j *= -1;
	_putchar(j + '0');
	return (j);



}
