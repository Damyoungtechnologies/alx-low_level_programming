#include <stdio.h>
/**
* main - this  is the first entry
* Return: 0
*/

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{

	if (i % 3  == 0 || i % 5 == 0)
		sum = sum + i;

	}
	printf("%d", sum);
	return (0);
}

