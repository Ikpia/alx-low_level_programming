#include <stdio.h>

/**
* main - funtion that prints lower case alphabets in reverse
* Return: 0
*/

	int main(void)
{
	char n = 'z';

	for (n = 'z'; n >= 'a'; n--)
{
		putchar(n);
}
	putchar('\n');
	return (0);
}

