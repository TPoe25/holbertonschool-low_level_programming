#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg
 * @argv: arg
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
