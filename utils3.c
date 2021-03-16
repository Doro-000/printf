#include "holberton.h"

/**
 * print_rot13 - encodes a string to rot13 and prints it
 * @args: variable arguments passed to _printf
 * @count: int to be used by _putchar, see _putchar in helpers.c
 *
 * Return: void
 */
void print_rot13(va_list args, int *count)
{
	int i = 0;
	char *string;

	string = va_arg(args, char *);
	if (string != NULL)
	{
		while (string[i] != '\0')
		{
			_putchar(transform(string[i]), count);
			i++;
		}
	}
	else
		print("(null)", count);
}
