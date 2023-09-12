#include "main.h"
/**
* print_alphabet - function to print alphabeth in lowercase
* Return: always 0
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
