#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: const char
 * @n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int at;
	unsigned int x = 0;

	va_start(ap, n);
	for (at = 0; at < n; at++)
	{
		x = va_arg(ap, const unsigned int);
			printf("%d", x);

		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
