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
        char num = '1';

	while (alph <= 'z')
	{
			putchar(alph);
			alph++;
	}

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	
	return (0);
}
