#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @c: single letter input
 *
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
