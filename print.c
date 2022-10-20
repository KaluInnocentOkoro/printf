#include "main.h"

/** _printf - function that produces output according to a format.
 * @format: character string. The format string is composed of zero or more directives.
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	print_t formatters[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	printed_chars = parser(format, formatters, args);
	va_end(args);
	return (printed_chars);
}
