#include <stdio.h>

/**
* main -  a program that prints all single digit numbers of base 10
* Return: 0
*/

	int main(void)
{
	char n = '0';

	for (n = '0'; n <= '9'; n++)
{
		putchar(n);
}
	putchar('\n');
	return (0);
}
