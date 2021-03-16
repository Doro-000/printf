# printf
Print ARGUMENT(s) according to FORMAT, or execute according to OPTION

## Format Specifiers

A format specifier follows this prototype: `%type`
The following format specifiers are supported:


### Supported Types

| Type   | Output |
|--------|--------|
| d or i | Signed decimal integer |
| u      | Unsigned decimal integer	|
| b      | Unsigned binary |
| o      | Unsigned octal |
| x      | Unsigned hexadecimal integer (lowercase) |
| X      | Unsigned hexadecimal integer (uppercase) |
| c      | Single character |
| s      | String of characters |
| %      | A % followed by another % character will write a single % |

### Files included

| Type   | Output |
|--------|--------|
| helper.c | helper fuctions that work with all the files |
| helper2.c | secound helper function	|
| utils.c | format specifiers and parser |
| utils2.c | secound utils2.c |
| holberton.h | header files |
| printf.c | main function that runs all the other functions |
