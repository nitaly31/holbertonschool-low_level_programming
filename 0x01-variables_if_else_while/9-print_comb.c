#include <stdio.h>
/**
 * main -Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int ab;

	for (ab = 48; ab <= 57; ab++)
	{
		putchar(ab);
		if (ab != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
