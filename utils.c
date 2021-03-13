#include "holberton.h"

/**
 * print - prints the given string to stdout
 * @string: string to be printed
 * @count: integer to be incremented for every char printed
 *
 * Return: void
 */
void print(char *string, int *count)
{
	while(*string != '\0')
	{
		write(1, string, 1);
		*count++;
		string++;
	}
}
