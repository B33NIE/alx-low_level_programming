#include <stdio.h>

/*
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * You can only use putchar
 * Return 0
*/

int main(void)

{
	int n;

	for (n = 97; n <= 122; ++n)
	putchar (n);
	for (n = 65; n <= 90; ++n)
	putchar (n);
	putchar(10);
return (0);
}
