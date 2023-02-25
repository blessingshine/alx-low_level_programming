#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int w, x, y;

	for (w = '0'; w <= '9'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if (w < x && x < y && w < y)
				{
					putchar(w);
					putchar(x);
					putchar(y);
				if (w == '7' && x == '8' && y == '9')
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
putchar('\n');
return (0);
}
