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

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
		{
			continue;
		}
		else if (a == 'q')
		{
			continue;
		}
		else
		{
			putchar (a);
		}
	}
	return (0);
}
