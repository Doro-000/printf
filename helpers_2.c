#include "holberton.h"

/**
 * _numlen - counts the number of digits in a number
 * @num: number to be counted
 *
 * Return: length of the number
 */
int _numlen(int num)
{
	int len = 0;

	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/**
 * looper - function that returns a function
 * @format: character to be checked
 * @flag: check if it matched
 *
 * Return: pointer to helper function
 */
void (*looper(char format, int *flag))(va_list, int *)
{
	map mapping[] = {
		{'c', print_char},{'d', print_int},
		{'i', print_int},{'s', print_str}
	};
	int i = 0;

	for (; i < 4; i++)
	{
		if (format == mapping[i].conversion_specifier)
		{
			*flag = 1;
			return (mapping[i].function);
		}
	}
	if (!*flag)
		return (NULL);
}
