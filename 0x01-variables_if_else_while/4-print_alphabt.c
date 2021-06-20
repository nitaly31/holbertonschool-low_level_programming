#include <stdio.h>
/**
 * main -Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int ab;

	for (ab = 97; ab <= 122; ab++)
	{
		if (ab != 101 && ab != 113)

			putchar(ab);
	}

		putchar('\n');

	return (0);
}
