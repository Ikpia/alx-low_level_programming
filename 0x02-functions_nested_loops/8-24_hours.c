#include "main.h"

/**
* jack_bauer - function that prints every minute of the day
* Return: 0
*/

	void jack_bauer(void)
{
	int n;
	int j;

	for (n = 00; n < 24; n++)
{
		for (j = 00; j < 60; j++)
{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
}
}
}
