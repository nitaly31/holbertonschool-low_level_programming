#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
/**
 * main -Positive anything is better than negative nothing
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ult;

	ult = n % 10;

	if (ult > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (ult == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		char c[] = "Last digit of";

		printf("%s %d is %d and is less than 6 and not 0\n", c, n, ult);
	}
	return (0);
}
