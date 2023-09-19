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
return (-1); }
va_start(argu, format);
if (*format == '%')
{
format++; }
else
{ write(1, format, 1);
num++; }
if (*format == 'c')
{a = va_arg(argu, int);
write(1, &a, 1);
num++; }
if (*format == 's')
{char *s = va_arg(argu, char *);
while (*s)
{write(1, s, 1);
s++;
num++; } }
else if (*format == '%')
{write(1, format, 1);
}
num += 2;
format++; }
va_end(argu);
return (num); 
}
