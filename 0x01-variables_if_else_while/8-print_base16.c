#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char lc;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (lc = 'a'; lc <= 'f'; lc++)
	putchar(lc);
	putchar('\n');

	return (0);
}
