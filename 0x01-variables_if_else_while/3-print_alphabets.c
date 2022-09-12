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
	char alph_cap = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (alph_cap <= 'Z')
	{
		putchar(alph_cap);
		alph_cap++;
	}
	putchar('\n');
	return (0);
}
