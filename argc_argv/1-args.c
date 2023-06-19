#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: arg
 * @argv: arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		i++;
	}
	i--;
	if (argv[0])
	{
		printf("%d\n", i);
	}
	return (0);
}
