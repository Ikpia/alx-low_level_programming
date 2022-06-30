#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - function that contains last digit
* Return - 0 if success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int j;

	j = n % 10;
	if (j > 5)
{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
}
	else if (j == 0)
{
		printf("Last digit of %d is %d and is 0\n", n, j);
}
	else if (j < 6)
{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, j);
}
	return (0);
}
