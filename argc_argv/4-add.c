#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * @argc: arg count
 * @argv: arg vector
 * Result: success
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc != 3)
	{
		printf("0\n");
		return (-1);
	}
	if (argv[1][2] < '0' || argv[1][2] > '9')
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a + b;

	printf("%d\n", sum);

	return (0);
}
