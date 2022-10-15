#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: function prints \"Programming is positive, zero, or negative
 * returns zero otherwise
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is greater than\n", n);
	}

	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%i is less than\n", n);
	}

	return (0);
}
