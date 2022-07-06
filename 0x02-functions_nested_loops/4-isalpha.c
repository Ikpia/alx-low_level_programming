#include "main.h"

/**
* _isalpha - function that checks for alphabet character.
* @c: c is the variable
* Return: 1 if true and 0 if false
*/

	int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
{
		return (1);
}
	else
{
		return (0);
}
}
