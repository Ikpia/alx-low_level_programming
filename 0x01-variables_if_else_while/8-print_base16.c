#include <stdio.h>

/**
* main -  a program that prints all the numbers of base 16 in lowercase
* Return: 0
*/

	int main(void)
{
	int a = 0;
	char n = 'a';

	for (a = '0'; a <= '9'; a++)
{
		putchar(a);
}

	for (n = 'a'; n <= 'f'; n++)
{
		putchar(n);
}
	putchar('\n');
	return (0);
}
