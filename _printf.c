#include "main.h"


/**
 * _printf - program print to print
 * @format: parameter
 *
 * Return: 0
 *
 */


int _printf(const char *format, ...)
{

int printed_chars;
changing_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_decimal_integer},
{"i", print_decimal_integer},
{"b", print_binary},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hexadecimal_low},
{"X", print_hexadecimal_upp},

{NULL, NULL}

};

va_list arg_list;

if (format == NULL)
return (-1);

va_start(arg_list, format);


printed_chars = parser(format, f_list, arg_list);

va_end(arg_list);

return (printed_chars);
}
