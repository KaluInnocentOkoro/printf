#include "main.h"

/**
* print_number - function prints a number
* @args: number to be printed
* Return: The number of arguments printed
*/
int print_number(va_list arg)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;
	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
/**
* print_unsigned_num - Function prints unsigned integer
* @n: number to print
* Return: number printed
*/
int print_unsigned_num(unsigned int n)
{
	int div = 1, len = 0;
	unsigned int num = n;

	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
