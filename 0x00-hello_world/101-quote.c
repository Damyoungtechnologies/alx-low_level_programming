#include <stdio.h>
#include <unistd.h>
/**
* main - first entry
* Return: return (1) if successfull
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
