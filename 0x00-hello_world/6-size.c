#include <stdio.h>
/**
*main - entry point
*Return: zero when successful
*/
int main(void)
{   
	printf("size of char: %lu bytes(s)\n",  	sizeof(char));
	printf("size of an integer: %lu bytes(		s)\n", sizeof(int));
	printf("size of a long integer: %lu byte	(s)\n", sizeof(long int));
	printf("size of long int: %lu bytes(s)\n	", sizeof(long long int));
	printf("size of a float:%lu bytes(s)\n",	sizeof(float));
	return (0);
}
