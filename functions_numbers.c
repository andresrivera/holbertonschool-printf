#include "main.h"

/**
 * print_numberDI - its used to print integer and decimal
 * @args: parameter
 *
 *
 * Return: 0
 */

int print_numberDI(va_list args)
{
int n, length, div;
unsigned int num;
n = va_arg(args, int);
div = 1;
length = 0;
if (n < 0)
{
length += _putcharf('-');
num = n * -1;
}
else
{
num = n;
}
for (; num / div > 9;)
{
div *= 10;
}
for (; div != 0;)
{
length += _putcharf('0' + num / div);
num %= div;
div /= 10;
}
return (length);
}


/**
 * print_decimal_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_decimal_integer(va_list list)
{
int nLength;
nLength = print_numberDI(list);
return (nLength);
}


/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = intoascii(va_arg(list, unsigned int), 10);

	size = print_BOH((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}