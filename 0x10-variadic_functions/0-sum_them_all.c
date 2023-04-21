#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Args counter
 * Return: Sum of the args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list jents;
	int sum = 0;
	unsigned int t = 0;

	if (n == 0)
		return (0);

	va_start(jents, n);

	for (t = 0; t < n; t++)
		sum += va_arg(night, int);
	va_end(jents);
	return (sum);
}
