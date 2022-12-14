#include "main.h"

/**
 * print_alphabet_x10 - X10 Alphabet printer.
 *
 * Description: Prints the alphabet in Lower Case
 * using int _putchar(int c) 10 times over.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alphabet_x10 = 'a';

		while (alphabet_x10 <= 'z')
	{
		_putchar(alphabet_x10);
		alphabet_x10++;
	}
		_putchar('\n');
	}
}
