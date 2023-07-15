#include "main.h"
/**
 *
 *
 *
*/
int print_int_d(va_list args)
{
	int num = va_arg(args, int);
	char buffer[20];
	int count = int_to_str(buffer, num);
	int i;

	for (i = 0; i < count; i++)
	{
	char c = buffer[i];
	write(1, &c, 1);
	}
	return (count);
}



/**
 *
 *
 *
*/

int print_int_i(va_list args)
{
	return (print_int_d(args));
}

