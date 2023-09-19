#include "main.h"

/**
 * _printf - print variables
 * @format:char
 * Return: printed char
*/
int _printf(const char *format, ...)
{
	va_list argu;
	int car_no = 0;
	va_start(argu, format);
	if (format == NULL)
	{
		return (-1); 
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				putchar('%');
				car_no++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(argu, int);
				putchar(c);
				car_no++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(argu, char *);
				while (*s)
				{
					putchar(*s);
					s++;
					car_no++;
				}
			}
			else
			{
				putchar(*format);
				car_no++;
			}
			format++;
		}
		va_end(argu);
	}
	return (car_no);
}
