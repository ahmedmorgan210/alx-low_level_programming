#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	d = n % 10;

	if (d > 5)
	{
		printf("Last digit of %d is and is %c greater than 5\n", n, d);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %c and is 0\n", n, d);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %c and less than 6 and not 0\n", n, d);
	}
	return (0);
}
