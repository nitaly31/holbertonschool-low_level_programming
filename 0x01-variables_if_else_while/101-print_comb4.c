#include <stdio.h>
/**
 * main -Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int ab;
	int i;
	int ii;

	for (ab = 48; ab <= 57; ab++)
	{
		for (i = ab + 1; i <= 57; i++)
		{
			for (ii = i + 1; ii <= 57; ii++)
			{
				putchar(ab);
				putchar(i);
				putchar(ii);

				if (!(ab == 55 && i == 56 && ii == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
