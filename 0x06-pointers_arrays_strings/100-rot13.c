#include "main.h"

/**
* rot13 - Function that reverses the content of an array of integers.
* @str: s is the array
*
* Return: Always 0.
*/
char *rot13(char *str)
{
	int x, y;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (str[x] == s[y])
			{
				str[x] = s1[y];
				break;
			}
		}
	}
	return (str);
}
