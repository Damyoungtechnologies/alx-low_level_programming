#include "main.h"
#include "my_putchar.h"

/**
 * print_line - only prints underscore
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');

	}

}
