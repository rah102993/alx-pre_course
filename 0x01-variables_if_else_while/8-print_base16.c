#include <stdio.h>
#include <stdlib.h>

/**
 * main - Looping through a to z while exempting e and q.
 * Using just putchar()
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar (a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
