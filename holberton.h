#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct map_t - a struct to map format specifier with functions
 *
 * @conversion_specifier: a char to represent a conversion specifier
 * @function: address of corresponding function
 */
typedef struct map_t
{
	char conversion_specifier;
	void (*function)(va_list arguments, int *count);
} map;

/* main _printf function */
int _printf(const char *format, ...);

/*--------Utility functions---------*/
void print_char(va_list args, int *count);
void print_str(va_list args, int *count);
void print_int(va_list args, int *count);
void print_hex_x(va_list args, int *count);
void print_hex_X(va_list args, int *count);

/*--------Utility2 functions---------*/
void print_bin(va_list args, int *count);
void print_S(va_list args, int *count);
void print_octal(va_list args, int *count);
void print_rev(va_list args, int *count);
char *convert(unsigned int num, int base);

/*--------Utility3 functions---------*/
void print_rot13(va_list args, int *count);
void print_unsigned(va_list args, int *count);
void print_address(va_list args, int *count);

/*--------Helper functions---------*/
/*helpers.c*/
void reverse_string(char *string, int length);
int _strlen(char *string);
void _itoa(int num, char *string, int base);
void print(char *, int *);
void _putchar(char, int *);

/*helpers_2.c*/
int _numlen(int num, int base);
void (*looper(char format))(va_list, int *);
char transform(char x);
void _itob(int num, char *string);
void _itoux(unsigned int num, char *string, unsigned int base);

/*helpers_3.c*/
void _itop(unsigned long num, char *string, unsigned long base);

#endif /*HOLBERTON_H*/
