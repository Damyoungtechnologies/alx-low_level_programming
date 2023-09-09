#include <stdio.h>
/**
* main - first entry to be read
* Return: to returb 0 means successful
*/
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
