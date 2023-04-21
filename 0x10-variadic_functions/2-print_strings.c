#include "variadic_functions.h"

/**
* print_strings - A function that prints strings
* @separator: String to be printed
* @n: Number of strings passed to the function
*
* Return: Void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	va_list jents;
	char *string;

	va_start(jents, n);
	for (t = 0; t < n; t++)
	{
		string = va_arg(jents, char *);
		if (string == 0)
			printf("%s", "(nil)");
		else
			printf("%s", string);

		if (t != n - 1 && separator != 0)

			printf("%s", separator);
	}
	va_end(jents);
	printf("\n");

}
