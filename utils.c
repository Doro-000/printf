#include "holberton.h"

/**
 * print_char - wrapper for _putchar to make it compatible with map type
 * @args: variable arguments passed to _printf
 * @count: int to be used by _putchar, see _putchar in helpers.c
 *
 * Return: void
 */
void print_char(va_list args, int *count)
{
	_putchar(va_arg(args, int), count);
}

/**
 * print_str - wrapper function for print to make it compatible with map type
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_str(va_list args, int *count)
{
	char *input_string = va_arg(args, char *);

	if (input_string != NULL)
		print(input_string, count);
	else
		print("(null)", count);
}

/**
 * print_int - prints an integer to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_int(va_list args, int *count)
{
	char *number_string;
	int num = va_arg(args, int);

	number_string = malloc(sizeof(char) * (_numlen(num, 10) + 1));
	if (number_string != NULL)
	{
		_itoa(num, number_string, 10);
	}
	else
		exit(-1);
	print(number_string, count);
	free(number_string);
}

/**
 * print_hex_x - prints an hex to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_hex_x(va_list args, int *count)
{
	char *hex_string;
	unsigned int num = va_arg(args, int);

	hex_string = malloc(sizeof(char) * (_numlen(num, 16) + 1));
	if (hex_string != NULL)
	{
		_itoux(num, hex_string, 16);
	}
	print(hex_string, count);
	free(hex_string);
}

/**
 * print_hex_X - prints an hex in capital to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_hex_X(va_list args, int *count)
{
	char *hex_string;
	unsigned int num = va_arg(args, int);
	int i;

	hex_string = malloc(sizeof(char) * (_numlen(num, 16) + 1));
	if (hex_string != NULL)
	{
		_itoux(num, hex_string, 16);
		for (i = 0; hex_string[i] != '\0' ; i++)
		{
			if (hex_string[i] >= 97 && hex_string[i] <= 122)
			{
				hex_string[i] -= 32;
			}
		}
	}
	print(hex_string, count);
	free(hex_string);
}
