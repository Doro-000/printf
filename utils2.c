#include "holberton.h"

void print_bin(va_list args, int *count)
{
	char *bin_string;
	int num = va_arg(args, int);
	int i = 0;

	bin_string = malloc(sizeof(char) * (binlen(num) + 1));
	if (bin_string != NULL)
	{
		_itoa(num, bin_string);
	}
	print(bin_string, count);
}
