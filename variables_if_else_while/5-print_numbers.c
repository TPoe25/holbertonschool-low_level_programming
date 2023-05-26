#include <stdio.h>
/**
 * main - printing base 10
 * Return: Always (0)
 * description: printings all base 10 numbers
 **/

int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
		if (num < 9)
		{
			printf("\n");
		}
	}
	printf("\n");

	return (0);
}
