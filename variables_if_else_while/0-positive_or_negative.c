#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - returning random numbers
 * Return: Always (0)
 * Description: using an if statement to put out random numbers
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0) 
		printf("%i is positive\n", n);
	else if ((n = 0)) 
		printf("%i is zero\n", n);
	else if (n < 0)
	       printf("%i is negative\n", n);	
	return (0);
}
