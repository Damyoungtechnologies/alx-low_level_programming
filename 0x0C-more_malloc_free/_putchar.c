#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character, it is user assigned
 * @c: print character
 *
 * Return: On success 1 only.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
