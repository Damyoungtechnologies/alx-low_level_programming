#include <stdio.h>
/**
*main - entry point
*Return: zero when successful
*/
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of an integer: %lu byte(s)\n", sizeof(int));
	printf("size of a long integer: %lu byte(s)\n", sizeof(long));
	printf("size of long int: %lu byte(s)\n", sizeof(double));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
