#include "holberton.h"
/**
 * print_bin - prints an bin to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */

void print_bin(va_list args, int *count)
{
	char *bin_string;
	int num = va_arg(args, int);
	int i = 0;

	bin_string = malloc(sizeof(char) * (_numlen(num) + 1));
	if (bin_string != NULL)
	{
		_itoa(num, bin_string);
	}
	print(bin_string, count);
	free(bin_string);
}
/**
 * print_S - prints the string to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_S(va_list args, int *count)
{
	char *string;
	int i = 0;

	for (; i < 
	{
		_itoa(num, bin_string);
	}
	print(bin_string, count);
}
