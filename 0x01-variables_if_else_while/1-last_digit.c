#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -print if the number is positive, zero or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there*/
{
	printf("Last digit of %i is %i and is ", n, (n % 10));
}
if ((n % 10) == 0)
{
	printf("0\n");
}
else if ((n % 10) > 5)
{
	printf("greater than 5\n");
}
else
{
	printf("less than 6 and not 0\n");
}
	return (0);
}
