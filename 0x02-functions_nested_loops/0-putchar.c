#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *@c: char to print
 *Description: 'c functions'
 *Return: return 0
 */
void putcharFunction(void);
int main(void)
{
	putcharFunction();
	return (0);
}
void putcharFunction(void)
{
	printf("_putchar\n");
}
