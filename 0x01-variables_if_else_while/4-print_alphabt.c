#include <stdio.h>
/**
* main - first entry level
* Return: when 0, it means successful
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
