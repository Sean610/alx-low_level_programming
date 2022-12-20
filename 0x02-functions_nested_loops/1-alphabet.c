#include "main.h"

/**
 * print_alphabet - Alphabet printer.
 *
 * Description: Prints the alphabet in Lower Case
 * using int _putchar(int c).
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
	_putchar(alphabet);
	alphabet++;
}
	_putchar('\n');
}
