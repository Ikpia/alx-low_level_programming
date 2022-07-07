#include "main.h"

/**
* print_sign - function that prints the sign of a number
* @n: n is an int variable
* Return: 1,0,-1 if n is greater than 0,is 0,less than 0
*/

	int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}

	else if (n == 0)
{
	_putchar('0');
	return (0);
}

	else
{
	_putchar('-');
	return (-1);
}
}
