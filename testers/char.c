#include "main.h"
/**
 *
 *
 *
*/
int _printch(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
