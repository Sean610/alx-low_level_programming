#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;
	char str[] = "Last digit of"

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10
	if (l > 5)
		printf("%s %d and is greater than 5\n", str, n, l);
	else if (l == 0)
		printf("%s %d and is 0\n", str, n, l );
	else if (0 != l < 6)
		printf("%s %d and is less than 6 and not 0", str, n, l);

	return (0);
}
