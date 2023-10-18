#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_c(va_list val);
int print_s(va_list val);
int print_mod(void);
int print_int(va_list val);
int print_dec(va_list val);
int print_bin(va_list val);
int print_uint(va_list val);
int print_oct(va_list val);
int print_hex(va_list val);
int print_Hex(va_list val);
int print_exc_string(va_list val);
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val)
print_hex_extra(unsigned long int a);
int print_revs(va_list val);
int print_rot13(va_list val);

#endif /*  MAIN_H  */
