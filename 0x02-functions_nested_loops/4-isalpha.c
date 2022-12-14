#include "main.h"

/**
 * _isalpha - Check for lowercase characters.
 * @c: Character operand.
 *
 * Return: 1 for alphabet & 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
