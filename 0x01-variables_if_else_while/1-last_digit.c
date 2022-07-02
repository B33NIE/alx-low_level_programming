#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - Entry point
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
        printf("Last digit of %d is ",n);
	if (n>5)
	{
	printf("greater than 5");
	}
	if (n == 0)
        {
	printf("0");
	}
	if (n < 6 && n!=0)
	{
	printf("less than 6 not 0");
        }		
	else if (s < 6)
        {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
printf("\n");
	return (0);
}
