#include "main.h"

/**
* parser - Function receives all necessary parameters to print a formatted output
* @format: The desired format strings
* @list: list of functions for formatting
* @args: list of arguments passed to the function
* Return: count of characters printed
*/
int parser(const char *format, print_t list[], va_list args)
{
	int i, j, ret, printed = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; list[j].op != NULL; j++)
			{
				if (format[i + 1] == list[j].op[0])
				{
					ret = list[j].func(args);
					if (ret == -1)
						return (-1);
					printed += ret;
					break;
				}
			}
			if (list[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed = printed + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed++;
		}
	}
	return (printed);
}
