#include <stdio.h>

/*
 * main - program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return 0
 *
*/

int main(void)
{
		int n;

		for (n = 97; n <= 122; ++n)
		{
			if (n != 101 && n != 113)
			{
				putchar (n);
			}
		}
		putchar (10);
return (0);
}
