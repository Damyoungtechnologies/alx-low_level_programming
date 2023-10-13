#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters in the func
 * @n: The number of paramters to be passed
 * @...: A variable number of paramters in varargs
 *
 * Return: If n == 0 - exit
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
