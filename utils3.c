#include "holberton.h"

/**
 * rot13 - rot13 encoder
 * @str: string to be encoded
 *
 * Return: address of the encoded string
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
