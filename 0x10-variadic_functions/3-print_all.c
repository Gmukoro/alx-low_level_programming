#include "variadic_functions.h"
/**
 * print_all - A function that prints anything.
 * @format: A list of types of arguments passed to the function.
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list jents;
	unsigned int i = 0, x, t = 0;
	char *str;
	const char arg_i[] = "cifs";

	va_start(jents, format);
	while (format && format[i])
	{
		x = 0;
		while (arg_i[x])
		{
			if (format[i] == arg_i[x] && t)
			{
				printf(", ");
				break;
			}
			x++; }
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(jents, int)), t = 1;
				break;
			case 'i':
				printf("%d", va_arg(jents, int)), t = 1;
				break;
			case 'f':
				printf("%f", va_arg(jents, double)), t = 1;
				break;
			case 's':
				str = va_arg(jents, char *), t = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++; }
	printf("\n"), va_end(jents);
}
