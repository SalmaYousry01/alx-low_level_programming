#include "main.h"

/**
 * main - Entry point
 * Return: the numers scince 0 up tp 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_pitchar('\n');
}
