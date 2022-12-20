#include "main.h"

/**
 * _islower - Check for lowercase characters.
 * @c: Character operand.
 *
 * Return: 1 for lowercase & 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}

	return (0);
}
