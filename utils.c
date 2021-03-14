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
	print(va_arg(args, char *), count);
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

<<<<<<< HEAD
	number_string = malloc(sizeof(char) * (_numlen(num) + 1);
	print(_itoa(num, number_string), count);
=======
	number_string = malloc(sizeof(char) * (_numlen(num) + 1));
	if (number_string != NULL)
		print(_itoa(num, number_string), count);
>>>>>>> d9dfd32ed935aa1443a1d5ee1d458ff156456716
}
