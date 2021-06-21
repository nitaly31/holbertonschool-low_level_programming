#include <stdio.h>
/**
 * main -Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int ab;
	int i;

	for (ab = 48; ab <= 57; ab++)
	{
		for (i = ab + 1; i <= 57; i++)
		{
			putchar(ab);
			putchar(i);

			if (!(ab == 56 && i == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
