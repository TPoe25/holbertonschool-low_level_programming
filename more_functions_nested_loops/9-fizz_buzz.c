#include "main.h"

/**
 * main - entry point
 * fizbuzz - code that is used to test coders
 * number: interger
 * Return: 0
 */


int main(void)
{
	int number;

	for (number = 1; number < 101; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("Fizzbuzz ");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((number % 5) == 0)
		{
			printf("Buzz");
			if (number != 100)
				printf(" ");
		}
		else
		{
			printf("%d ",  number);
		}
		if (number == 100)
		{
			printf("\n");
		}
	}
	return (0);
}
