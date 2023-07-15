#include "main.h"
/**
 *
 *
 *
*/
int _percent(va_list args)
{
	char c = '%';
	write(1, &c, 1);
	return (1);
}

/**
 *
 *
 *
*/
int int_to_str(char *buffer, int num)
{
        int i;
	int count = 0;
	if (num == 0)
	{
		buffer[0] = '0';
		count++;
	}
	else if (num < 0)
{
	num = -num;
	buffer[0] = '-';
	count++;
}
        int temp = num;
        while (temp > 0)
{
        temp /= 10;
	count++;
}

	buffer[count] = '\0';
	for (i = count - 1; i >= (num < 0 ? 1 : 0); i--)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
	}

       return (count);
}
