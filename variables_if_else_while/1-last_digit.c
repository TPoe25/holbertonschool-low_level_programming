#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 
 * Return: Always (0)
 * description: program to assign random number to variable n each time its executed
 * */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n);
}
if ((n==0))
{
printf("Last digit of %i is %i and is 0\n", n, n);
}
if (n < 6 || n != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n);
}
return (0);
}
