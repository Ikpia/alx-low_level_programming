#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*if,els statement)*/

int main(void)
{
int n;
strand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("is positive\n", n);
}
else if (n == 0)
{
	printf("is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
return (0);
}
