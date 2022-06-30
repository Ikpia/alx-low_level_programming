#include <stdio.h>

/**
* main - a function that prints upper and lowercase alphabets
* Return: 0
*/

	int main(void)
{
	char n = 'a';
	char p = 'A';

	for (n = 'a'; n <= 'z'; n++)
{
		putchar(n);
}

	for (p = 'A'; p <= 'Z'; p++)
{
		putchar(p);
}
	putchar('\n');
	return (0);
}
