#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between the strings
 * @n: # of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (!string)
			string = "(nil)";
		if (!separator)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	printf("\n");
	va_end(ap);
}
