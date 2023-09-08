#include <stdio.h>
/**
*main - entry point
*Return: zero when successful
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}