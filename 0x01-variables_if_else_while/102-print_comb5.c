#include <stdio.h>
/**
 * main - main entry function
 * prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int m, n, o, p;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (o = 48; o <= 57; o++)
			{
				for (p = 48; p <= 57; p++)
				{
				if (((o + p) > (m + n) &&  o >= m) || m < o)
				{
					putchar(m);
					putchar(n);
					putchar(' ');
					putchar(o);
					putchar(p);

					if (m + n + o + p == 227 && m == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

