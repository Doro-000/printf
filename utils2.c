#include "holberton.h"

/**
 * convert - convert to desired base;
 * @num: given number
 * @base: given base
 *
 * Return: ptr to character
 */
char *convert(unsigned int num, int base)
{
	char Representation[] = "0123456789ABCDEF";
	char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * print_bin - prints a binary to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_bin(va_list args, int *count)
{
	char *bin_string;
	unsigned int num = va_arg(args, unsigned int);

	bin_string = malloc(sizeof(char) * (_numlen(num, 2) + 1));
	if (bin_string != NULL)
	{
		print(convert(num, 2), count);
	}
	else
		exit(-1);
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
	unsigned int num = va_arg(args, unsigned int);
	char *oct_string;

	oct_string = malloc(sizeof(char) * (_numlen(num, 8) + 1));
	if (oct_string != NULL)
	{
		print(convert(num, 8), count);
	}
	else
		exit(-1);
	free(oct_string);
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
	int i = 0, j = 0;

	string = va_arg(args, char *);
	if (string != NULL)
	{
		for (; string[i] != '\0'; i++)
		{
			if ((string[i] > 0 && string[i] < 32) || (string[i] >= 127))
			{
				hex = malloc(sizeof(char) * (_numlen(string[i], 16)));
				if (_numlen(string[i], 16) == 2)
					print("\\x", count);
				else
					print("\\x0", count);
				_itoa(string[i], hex, 16);
				for (; hex[j] != '\0'; j++)
				{
					if (hex[j] >= 97 && hex[j] <= 122)
					{
						hex[j] -= 32;
					}
				}
				print(hex, count);
				free(hex);
			}
			else
			{
				_putchar(string[i], count);
			}
		}
	}
	else
	{
		print("(null)", count);
	}
}

/**
 * print_rev - reverses and prints a string to stdout;
 * @args: variable arguments passed to _printf
 * @count: int to be used by print, see description for print in helpers.c
 *
 * Return: void
 */
void print_rev(va_list args, int *count)
{
	char *rev_string;
	int len;

	rev_string = va_arg(args, char *);
	if (rev_string != NULL)
	{
		len = _strlen(rev_string);
		while (--len >= 0)
		{
			_putchar(rev_string[len], count);
		}
	}
	else
		print("(null)", count);
}
