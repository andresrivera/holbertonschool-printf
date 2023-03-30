#include "main.h"


int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intoascii(va_arg(list, unsigned int), 2);

	size = print_BOH(p_buff);
	return (size);
}

/**
 * print_octal - Print a unsigned octal
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intoascii(va_arg(list, unsigned int), 8);

	size = print_BOH((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}


/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intoascii(va_arg(list, unsigned int), 16);

	size = print_BOH((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

/**
 * print_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_upp(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intoascii(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);

	size = print_BOH((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}