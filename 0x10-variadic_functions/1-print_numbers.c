#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers
 * @separator: String to be printed between numbers
 * @n: Numbers of ints passed in the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list jents;
	unsigned int t;

	va_start(jents, n);

	for (t = 0; t < n; t++)
	{
	printf("%d", va_arg(jents, int));

	if (separator && t < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(jents);
}
