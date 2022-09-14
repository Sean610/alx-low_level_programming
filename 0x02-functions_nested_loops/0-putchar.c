#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[5];
	int m;

	str[0] = '_';
	str[1] = 'p';
	str[2] = 'u';
	str[3] = 't';
	str[4] = 'c';
	str[5] = 'h';
	str[6] = 'a';
	str[7] = 'r';
	str[8] = '\n';
	str[9] = '0';
	m = 0;
	
	while (str[m] != '\0')
	{
		putchar(str[m]);
		m++;
	}


	return (0);
}
