#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main (void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	putchar ('\n');
	
	return (0);
}
