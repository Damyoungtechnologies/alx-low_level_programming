#include <stdio.h>
/**
* main - first entry
* Return: 0, when it is successful
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
