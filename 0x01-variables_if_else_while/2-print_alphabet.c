#include <stdio.h>
/*
 * main - program that prints the alphabet in lower case
 *
 * Return 0
 *
*/

int main(void)
{
	int n;

	for (n = 97; n <= 122; ++n)
		putchar (n);
	putchar (10);

return (0);
}
