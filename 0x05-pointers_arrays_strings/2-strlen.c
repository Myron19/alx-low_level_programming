#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 *
 * @s: this is the input string
 *
 * Retur: lenght of a string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
