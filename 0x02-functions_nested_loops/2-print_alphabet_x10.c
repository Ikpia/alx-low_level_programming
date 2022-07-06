#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet,in lowercase
* Return: 0
*/

	void print_alphabet_x10(void)
{
	int n = 0;
	char j = 'a';

	for (n = 0; n < 10; n++)
{
	for (j = 'a'; j <= 'z'; j++)
{
		_putchar(j);
}
	_putchar('\n');
}

}
