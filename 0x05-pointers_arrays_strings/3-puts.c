#include "main.h"

/**
 *  _puts - write a function that prints a string, followed by a new line
 *  stdout.
 *
 *  @str: This is my iput string
 *
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]0;
	}
	_putchar ('\n');
}
