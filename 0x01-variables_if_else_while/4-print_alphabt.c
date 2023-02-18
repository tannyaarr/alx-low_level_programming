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
	char lc, e, q;

	e = 'e';
	q = 'q';

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != e && lc != q)
		putchar(lc);
	}
	puthar('\n');
	return (0);
}
