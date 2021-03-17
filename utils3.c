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

/**
 * print_unsigned - unsigned int and prints it
 * @args: variable arguments passed to _printf
 * @count: int to be used by _putchar, see _putchar in helpers.c
 *
 * Return: void
 */
void print_unsigned(va_list args, int *count)
{
	char *unsigned_string;
	int num = va_arg(args, int);
	unsigned int n;

	n = num;
	unsigned_string = malloc(sizeof(char) * (_numlen(n, 10) + 1));
	if (unsigned_string != NULL)
	{
		_itoux((4294967296 + n), unsigned_string, 10);
		print(unsigned_string, count);
	}
	else
		exit(-1);
	free(unsigned_string);
}
