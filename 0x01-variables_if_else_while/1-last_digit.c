#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - funtion prints last digit
 *
 * Return: 0 (always)
 */

int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = (n % 10);

	printf("Last digit of %d", n);

	printf(" is %d", x);

	if (x > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (x == 0)
	{
		printf(" and is 0\n");
	}
	if (x < 6 && x != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
