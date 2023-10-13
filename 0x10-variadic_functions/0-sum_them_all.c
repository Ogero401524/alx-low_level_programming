#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: The number of paramter.
 * @...:paramters.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lidt;
	unsigned int i, sum = 0;

	va_start(lidt, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lidt, int);

	va_end(lidt);

	return (sum);
}
