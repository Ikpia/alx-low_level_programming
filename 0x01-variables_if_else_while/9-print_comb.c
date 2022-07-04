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
	putchar(n);
	if (n == '9')
{
		putchar('\n');
		break;
}
	putchar(',');
	putchar(' ');
}
	return (0);
}
