#include "main.h"

/**
* _islower - function that checks for lowercase character.
* @c: c is the variable
* Return: 1 if true and 0 if false
*/

	int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
{
		return (1);
}
	else
{
		return (0);
}
}
