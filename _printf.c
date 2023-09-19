#include "main.h"
/**
 *  _printf- print variables
 *  @format: char
 *  Return:  printed char
*/
int _printf(const char *format, ...)
{
va_list argu;
int num = 0, a;
while (*format)
{
if (*format == '\0')
{
	return (-1);
}
va_start(argu, format);
if (*format == '%')
{
	format++;
}
if (*format == '%')
{putchar('%');
num++; }
else if (*format == 'c')
{a = va_arg(argu, int);
putchar(a);
num++; }
if (*format == 's')
{char *s = va_arg(argu, char*);
putchar(*s);
s++;
num++; }
else
{putchar(*format);
num += 2; }
format++; }
va_end(argu);
return (num);
}
