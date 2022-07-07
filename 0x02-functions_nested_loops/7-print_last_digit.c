#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: integer variable
* Return: last digit
*/

	int print_last_digit(int n)
{
	int j = (n % 10) * (11);

	if (n == 0)
{
	_putchar(48);
	_putchar(48);
}

else
{
	return (j);
}
}
