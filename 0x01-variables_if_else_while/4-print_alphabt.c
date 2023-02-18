#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - all alphabets except q and e
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
	putchar('\n');
	return (0);
}
