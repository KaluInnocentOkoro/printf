#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
* struct print - defines a structure for print function
* @op: operator
* @func: The associated function
*/
struct print
{
	char *op;
	int (*func)(va_list);
};

typedef struct print print_t;

int _printf(const char *format, ...);
int parser(const char *format, print_t formatters[], va_list args);

int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list args);
int print_percent(va_list arg);
int print_int(va_list);

int print_number(va_list);
int print_unsigned_num(unsigned int);
int print_unsigned_int(va_list);


#endif /* MAIN_H */
