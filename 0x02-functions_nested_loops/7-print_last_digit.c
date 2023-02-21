#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number tonbe treated
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 10)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
