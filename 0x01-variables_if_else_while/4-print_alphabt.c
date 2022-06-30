#include <stdio.h>

/**
* main - function that prints alphabets except q and e
* Return: 0
*/

	int main(void)
{
	char n = 'a'

	for (n = 'a'; n <= 'z'; n++)
{
		if ((n != 'e') && (n != 'q'))
{
			putchar(n);
}
}
	putchar('\n');
	return (0);
}
