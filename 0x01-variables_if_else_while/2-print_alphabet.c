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

	char alph = 'a';

	while (alph <= 'z');
	{
			putchar(alph);
			alph++;
	}
	putchar('\n');

	return (0);
}
