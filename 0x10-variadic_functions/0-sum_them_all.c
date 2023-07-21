#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all it parameters
 * @n: the number of parameters passed to the function
 * @...: variable number of parametr to calculate sum of
 *
 * Return: If n == 0 - 0
 *	   otherwise - sume of all parametr
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
