#include "main.h"
#include <stddef.h>

/**
 * _strlen - Calculates the length of a null-terminated string.
 * @str: The input string.
 *
 * Return: Length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	if (str == NULL)
		return (0);
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
