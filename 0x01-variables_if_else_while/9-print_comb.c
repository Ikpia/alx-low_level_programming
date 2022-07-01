#include <stdio.h>

/**
* main - program that prints possible combinations of single-digit numbers
* Return: 0
*/

	int main(void)
{
	int n = 0;

	for (n = '0'; n <= '9'; n++)
{
		if (n < '9')
{
			putchar(n);
			putchar(',');
			putchar(' ');
}
		else if (n == '9')
{
			putchar(n);
}
}
	return (0);
}
