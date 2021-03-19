#include "holberton.h"

/**
 * _itop - converts a number to unsigned pointer
 * @num: number to be converted
 * @string: buffer to store the result in
 * @base: base of number
 *
 * Return: the converted string
 */

void _itop(unsigned long num, char *string, unsigned long base)
{
	int i = 0, remain = 0;

	if (num == 0)
	{
		string[i++] = '0';
		string[i] = '\0';
	}
	while (num)
	{
		remain = num % base;
		string[i] = (remain  > 9) ? ((remain - 10) + 'a') : (remain + '0');
		num /= base;
		i++;
	}
	string[i] = '\0';
	reverse_string(string, _strlen(string));
}
