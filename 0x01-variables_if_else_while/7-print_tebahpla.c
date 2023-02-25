#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int s;

	for (s = 'z'; s >= 'a'; s--)
	putchar(s);
	putchar('\n');
	return (0);
}
