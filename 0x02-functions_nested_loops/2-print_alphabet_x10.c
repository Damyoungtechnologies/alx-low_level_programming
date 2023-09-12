#include "main.h"
/**
* print_alphabet_x10 - fuction to display alphabeth 10 times
* Return: always 0
*/

void print_alphabet_x10(void)
{
	int k;
	char b;

	for (k = 0; k < 10; k++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);

		}
		_putchar('\n');
	}


}
