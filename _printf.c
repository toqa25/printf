#include "main.h"
/**
 *  _printf- print variables
 *  @format: char
 *  Return: 0 Always
*/
int _printf(const char *format, ...)
{va_list argu;
va_start(argu, format);
int char_no = 0;

if (format == NULL)
{
	return (-1);
}
while (*format)
{
if (*format == '%')
{format++;
if (*format == '%')
{putchar('%');
char_no++; }
else if (*format == 'c')
{char c = va_arg(argu, int);
putchar(c);
char_no++;
}
else if (*format == 's')
{char *s = va_arg(argu, char *);
while (*s)
{putchar(*s);
s++;
char_no++;
}}
else
{putchar(*format);
char_no++; }
format++; }
va_end(argu);
return (char_no); }
