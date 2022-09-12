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
	char alph = 'z';

	while (alph >= 'a')
	{
			putchar(alph);
			alph--;
	}

	putchar('\n');

	return (0);
}
