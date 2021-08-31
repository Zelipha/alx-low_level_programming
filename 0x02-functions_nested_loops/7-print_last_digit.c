#include "main.h"

/**
 * print_last_digit - Prints the last digit.
 *
 * @n: Argument passed.
 *
 * Return: The value of last digit.
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num  < 0)
		num *= -1;

	_putchar(num + '0');

	return (num);
}
