#include <stdio.h>

/**
* main - funtion that prints lower case alpphabets
* Return: 0
*/

	int main(void)
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
{
		putchar(n);
}
	putchar('\n');
	return (0);
}
