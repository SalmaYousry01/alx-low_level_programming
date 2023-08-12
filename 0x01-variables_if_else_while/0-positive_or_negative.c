#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'learning c'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
	        printf("the number is positive");
	}
	else if(n < 0)
	{
		printf("the number is negative");
	}
	else
                printf("the number is zero");
	return (0);
}
