#include "holberton.h"

/**
 * reverse_string - reverses a string
 * @string: string to be reversed
 * @length: length of the string
 *
 * Return: void
 */
void reverse_string(char *string, int length)
{
	int first = 0, last = length - 1;
	char temp;

	while (first < last)
	{
		temp = string[first];
		string[first] = string[last];
		string[last] = temp;
		first++;
		last--;
	}
}

/**
 * _strlen - counts the length of a string
 * @string: string to be counted
 *
 * Return: length of the string
 */
int _strlen(char *string)
{
	int len = 0;

	while (*string++)
		len++;
	return (len);
}
