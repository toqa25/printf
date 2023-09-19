#include "main.h"
/**
 *  _printf- print variables
 *  @format: char
 *  Return:  printed char
*/
int _printf(const char *format, ...)
{
va_list argu;
int num = 0, a, b = 0;
va_start(argu, format);

if (*format[0] == '%' && format[1] == '\0') || (*format == NULL)
{
return (-1); }
while (format[num] != '\0')
{
	a = 13;
	while (a >= 0)
	{

if (m[a].at[0] == format [num] && m[a].at[1] == format[num + 1])
{
b = b + m[a].f(argu);
num = num + 2;
}
a--;
}
_putchar(format[num]);
b++;
a++;
}
va_end(argu);
return (b); 
}
