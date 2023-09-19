#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
	};

	va_list args;
	int a= 0, b, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[a] != '\0')
	{
		b= 13;
		while (b >= 0)
		{
			if (m[b].id[0] == format[a] && m[b].id[1] == format[a + 1])
			{
				len += m[b].f(args);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		len++;
		a++;
	}
	va_end(args);
	return (len);
}
