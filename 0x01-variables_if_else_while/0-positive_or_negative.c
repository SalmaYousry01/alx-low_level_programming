#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("the number is positive and is equal to %d\n", n);
	}
	else if (n == 0)
	{
		printf("the number is zero");
	}
	else if (n < 0)
	{
		printf("the number is negative");
	}
	else
		printf("it's not a number");
	return (0);
}
