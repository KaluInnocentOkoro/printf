#include "main.h"

/**
* print_char - function prints a char
* @args: function argument to be printed
* Return: returns the amount of characters printed
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
* print_int - Function prints an integer
* @args: argument passed
* Return: The amount of charactera printed
*/
int print_int(va_list args)
{
	int num = print_number(args);

	return (num);
}
/**
* print_str - Function prints a string
* @args: argument passed
* Return: Number of characters printed
*/
int print_str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
/**
* print_percent - Function prints a percentage symbol
* @args: argumentbsupplied
* Return: Number of characters printed
*/
int print_percent(va_list args)
{
	_putchar('%');
	return (1);
}
/**
* print_unsigned_int - Function prints unsigned int
* @args: List of all of the arguments
* Return: Number of arguments printed
*/
int print_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	if (num  == 0)
		return (print_unsigned_num(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_num(num));
}
