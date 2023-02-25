#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x != y && x < y)
			{
			putchar(x);
			putchar(y);
			if (x == '8' && y == '9')
			{
				break;
			}
			else
			putchar(',');
			putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
