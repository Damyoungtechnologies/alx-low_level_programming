#include <stdio.h>
/**
* main - first entry
* Return: 0;
*/
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", a);

	for (i = 1; i < 50; i++)
	{
	printf("%lu", b);
	next = a + b;
	a = b;
	b = next;
	if (i != 49)
		printf(", ");
	}

	printf("\n");
	return (0);





}
