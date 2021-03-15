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

	bin_string = malloc(sizeof(char) * (_numlen(num, 2) + 1));
	if (bin_string != NULL)
	{
		_itoa(num, bin_string, 2);
	}
	print(bin_string, count);
	free(bin_string);
}

/**
 * print_octal - prints an octal to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_octal(va_list args, int *count)
{
	char *octal_string;
	int num = va_arg(args, int);

	octal_string = malloc(sizeof(char) * (_numlen(num, 8) + 1));
	if (octal_string != NULL)
	{
		_itoa(num, octal_string, 8);
	}
	print(octal_string, count);
	free(octal_string);
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
	char *hex;
	int i = 0;

	string = va_arg(args, char *);
	for (; string[i] != '\0'; i++) 
	{
		if (string[i] >= 32 && string[i] <= 126)
			_putchar(string[i], count);
		else
		{
			hex = malloc(sizeof(char) * (_numlen(string[i], 16) + 1));
			_itoa(string[i], hex, 16);
			print(hex, count);
			free(hex);
		}
	}
}
