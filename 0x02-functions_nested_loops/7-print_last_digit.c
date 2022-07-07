#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: integer variable
* Return: last digit
*/

	int print_last_digit(int n)
{
	if (n == 0)
{
	_putchar('0');
	_putchar('0');
}

else
{
	return ((n % 10) * (11));
}
}
