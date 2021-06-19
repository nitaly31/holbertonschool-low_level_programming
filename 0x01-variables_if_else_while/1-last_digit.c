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
	int ult;
	char c[];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c[] = "Last digit of";

	ult = n % 10;

	if (ult > 5)
	{
		printf("%s %d is %d and is greater than 5\n", c, n, utl);
	}
	else if (ult == 0)
	{
		printf("%s %d is 0 and is 0\n", c, n);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", c, n, ult);
	}
	return (0);
}
